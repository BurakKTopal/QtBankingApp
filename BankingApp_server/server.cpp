#include "server.hpp"
#include "DataBaseManager.hpp"
#include <QDataStream>

Server::Server(DatabaseEngine& server_db, QObject* parent) : QTcpServer(parent), db(server_db) {
    //connect(this, &Server::newConnection, this, &Server::readData);
}

void Server::incomingConnection(qintptr socketDescriptor) {
    // Creating new Thread
    QThread* thread = new QThread;
    // Adding thread to list
    client_threads.push_back(thread);

    // Adding new client connection
    QTcpSocket* client_connection = new QTcpSocket(nullptr);
    client_connection->setSocketDescriptor(socketDescriptor);

    // appending new client connection to list
    client_connections.push_back(client_connection);

    // Move the entire client_connection object to the new thread
    client_connection->moveToThread(thread);

    connect(thread, &QThread::finished, thread, &QThread::deleteLater);

    connect(client_connection, &QTcpSocket::readyRead, this, [=]() {
            HandleClient(client_connection);
        }, Qt::DirectConnection); // To ensure that action is done in the same thread, we use Qt::DirectConnection
    qInfo()<<"CLIENT JOINED\n";
    thread->start();
}


QDataStream &operator<<(QDataStream &out, const client_data &data) {
    out << data.account_number
        << QByteArray::fromStdString(data.password)
        << QByteArray::fromStdString(data.name)
        << QByteArray::fromStdString(data.type)
        << data.balance << data.active << data.msg_id << data.to_account_number;
    return out;
}

// Defining operator for fetching the struct from the server.
QDataStream &operator>>(QDataStream &in, client_data &data) {
    QByteArray password, name, type;
    in >> data.account_number >> password >> name >> type
        >> data.balance >> data.active >> data.msg_id >> data.to_account_number;

    data.password = password.toStdString();
    data.name = name.toStdString();
    data.type = type.toStdString();

    return in;
}

void Server::HandleClient(QTcpSocket* client_connection) {
    // Handle incoming data
    if (client_connection->bytesAvailable() > 0) {
        QByteArray data = client_connection->readAll();
        qDebug() << "Received from client: " << data;
        qDebug()<< "the length is "<<data.length();
        for(int i=0;i<data.size(); i++){
            qDebug() << static_cast<uchar>(data[i]);
        }
        QDataStream stream(&data, QIODevice::ReadOnly);

        client_data receivedData;
        client_data requested_client_details;
        QByteArray byteArray;
        stream >> receivedData; // Turning received data into a client_data struct.
        qDebug()<<"name of client: "<< receivedData.name<<" Account number of client: "<<receivedData.account_number<<" BALANCE: "<<receivedData.balance;
        qDebug()<<"THE MSG ID is"<<receivedData.msg_id;
        switch(receivedData.msg_id){

        case 1: // Saving new clients
            qDebug()<<"TYPE 1\n";
            qDebug()<<"name of client: "<< receivedData.name<<" Account number of client: "<<receivedData.account_number<<" BALANCE: "<<receivedData.balance;

            if (db.SaveClient(receivedData) ==0){
                QString response = "Success";

                client_connection->write(response.toUtf8());
            }
            else {
                QString response = "Something went wrong";
                client_connection->write(response.toUtf8());
            }
            break;

        case 2: // Updating balance of client in case of deposit/withdrawal
            qDebug()<<"TYPE 2\n";

            if (db.UpdateClientBalance(receivedData.balance, receivedData.account_number) == 0){
                QString response = "Success";
                client_connection->write(response.toUtf8());
            }
            else {
                QString response = "Something went wrong";
                client_connection->write(response.toUtf8());
            }
            break;

        case 3: // Saving the transfer of the client to other accounts

            qDebug()<<"TYPE 3\n";

            if (db.SaveTransfer(receivedData.balance, receivedData.account_number, receivedData.to_account_number) == 0){
                QString response = "Success";
                client_connection->write(response.toUtf8());
            }
            else {
                QString response = "Something went wrong";
                client_connection->write(response.toUtf8());
            }
            break;

        case 4: // reading client, if exists, by account number

            qDebug()<<"TYPE 4\n";
            qDebug()<<"RECEIEVED ACCOUNT NUMBER:"<<receivedData.account_number;
            requested_client_details = db.ReadClient(receivedData.account_number);

            qDebug()<<"name of client: "<< requested_client_details.name<<" Account number of client: "<<requested_client_details.account_number<<" BALANCE: "<<requested_client_details.balance;
            qDebug()<<"THE PASSWORD IS:"<<requested_client_details.password <<" The msg id is: "<<requested_client_details.msg_id<<"ACTIVE: "<<requested_client_details.active;
            if(requested_client_details.active){
                requested_client_details.msg_id = 4;
                QByteArray byteArray;
                QDataStream stream(&byteArray, QIODevice::WriteOnly);
                stream << requested_client_details;
                client_connection->write(byteArray);
            }
            else {
                requested_client_details.msg_id = 4;
                requested_client_details.account_number = 0;
                requested_client_details.password = "";

                QByteArray byteArray;
                QDataStream stream(&byteArray, QIODevice::WriteOnly);
                stream << requested_client_details;
                client_connection->write(byteArray);
            }
            break;

        case 5: // Deleting account of client

            qDebug()<<"TYPE 5\n";

            if (db.DeleteClient(receivedData.account_number)==0){
                QString response = "Success";
                client_connection->write(response.toUtf8());
            }
            else {
                QString response = "Something went wrong";
                client_connection->write(response.toUtf8());
            }
            break;

        case 6: // Sending the transfers of the client

            qDebug()<<"TYPE 6\n";
            qDebug()<<"THE ACCOUNT NUMBER THAT IS RECEIVED WITH ID 6 IS: "<<receivedData.account_number;

            byteArray = CreateArrayOfTransfers(receivedData.account_number);
            client_connection->write(byteArray);
            break;

        case 7: // Updating password
            qDebug()<<"TYPE 7\n";
            if (db.UpdateClientPassword(receivedData.password, receivedData.account_number) == 0){
                QString response = "Success";
                client_connection->write(response.toUtf8());
            }
            else {
                QString response = "Something went wrong";
                client_connection->write(response.toUtf8());
            }
            break;
        default:
            qDebug()<<"Wrong Encoding";
            // code to be executed if none of the cases match
            break;
        }
    }
}


QByteArray Server::CreateArrayOfTransfers(const int& account_number){
    // Function to fetch the transfers of the client from the db
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    vector<transfer_data> transfers = db.GetTransfers(account_number);

    // Send the size of the vector
    stream << static_cast<quint32>(transfers.size());

    for (const transfer_data& transfer : transfers) {
        qDebug()<<"Transfer account number :"<<transfer.account_number<<"NAME:"<<transfer.name<<"TO ACCOUNT"<<transfer.to_account_number<<"\n";
        stream << transfer.account_number
                    << transfer.to_account_number
                    << QString::fromStdString(transfer.name)
                    << transfer.amount
                    << QString::fromStdString(transfer.date);
    }
    return byteArray;
 }

