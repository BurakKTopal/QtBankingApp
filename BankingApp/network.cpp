#include "network.hpp"

// Defining operator to be able to send struct through TCP connection
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

Client::Client(QObject* parent) : QObject(parent) {
    socket = new QTcpSocket(this);
    connect(socket, &QAbstractSocket::disconnected, [=]() {
        qDebug() << "Socket Client Disconnected";
    });
}

void Client::connectToServer(const QString& address, quint16 port) {
    socket->connectToHost(address, port);
    qDebug()<<"CLIENT CONNECTED!";
}

void Client::SaveClient(client_data &data) {
    data.msg_id = 1; // To make clear to the server which type of message he receives
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);
}


void Client::UpdateBalance(const double& amount, const int& account_number) {
    client_data data;
    data.msg_id = 2; // To make clear to the server which type of message he receives
    data.balance = amount;
    data.account_number = account_number;
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);
    if (socket->waitForReadyRead(5000)){
        QByteArray data = socket->readAll();
        qDebug()<<"THE MESSAGE for ID 2 FROM THE SERVER IS: "<< data;
    }
}


void Client::SaveTransfer(const double& amount, const int& account_number, const int& to_account_number) {
    client_data data;
    data.msg_id = 3; // To make clear to the server which type of message he receives
    data.balance = amount; // Amount represents in this case the given transfer money
    data.account_number = account_number;
    data.to_account_number = to_account_number;
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);
    if (socket->waitForReadyRead(5000)){
        QByteArray data = socket->readAll();
        qDebug()<<"THE MESSAGE for ID 3 FROM THE SERVER IS: "<< data;
    }
}


client_data Client::ReadClient(const int& account_number) {

    client_data data;
    client_data responseData;
    //if (socket->state() == QAbstractSocket::ConnectedState) {
    data.msg_id = 4; // To make clear to the server which type of message he receives
    data.account_number = account_number;
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);

    // Wait for a response from the server (adjust the timeout as needed)
    if (socket->waitForReadyRead(5000)) {
        // Read the response from the server
        QDataStream responseStream(socket);
        responseStream >> responseData;
        qDebug()<<"name of client: "<< responseData.name<<" Account number of client: "<<responseData.account_number<<" BALANCE: "<<responseData.balance;
        qDebug()<<"THE PASSWORD IS:"<<responseData.password <<" The msg id is: "<<responseData.msg_id<<"ACTIVE: "<<responseData.active;
        return responseData;

    } else {
        // Handle the case where the wait times out
        qDebug() << "Timeout waiting for response from the server";
        responseData.active = false;

        return responseData;
    }
}

void Client::DeleteClient(const int& account_number) {
    client_data data;
    data.msg_id = 5; // To make clear to the server which type of message he receives
    data.account_number = account_number;
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);

}

vector<transfer_data> Client::GetTransfers(const int& account_number) {
    client_data data;
    qDebug()<<"THE ACCOUNT NUMBER THAT IS SENT WITH ID 6 IS: "<<account_number;
    std::vector<transfer_data> receivedVector = {};
    data.msg_id = 6; // To make clear to the server which type of message he receives
    data.account_number = account_number;
    qDebug()<<"DATA IS GOING TO BE SENT TO GET TRANSFERS for account number: "<<data.account_number;
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);

    // Wait for a response from the server (adjust the timeout as needed)
    if (socket->waitForReadyRead(5000)) {
        QDataStream in(socket);
        quint32 vectorSize;
        in >> vectorSize;
        qDebug()<<"THE vector size is: "<<vectorSize;
        for (quint32 i = 0; i < vectorSize; ++i) {

            transfer_data transfer;
            in >> transfer.account_number
                >> transfer.to_account_number;

            QString name, date;
            in >> name >> transfer.amount >> date;

            transfer.name = name.toStdString();
            transfer.date = date.toStdString();

            receivedVector.push_back(transfer);
            qDebug()<<"Transfer account number :"<<transfer.account_number<<"NAME:"<<transfer.name<<"TO ACCOUNT"<<transfer.to_account_number<<"\n";

        }
        return receivedVector;

    } else {
        // Handle the case where the wait times out
        qDebug() << "Timeout waiting for response from the server";
        return receivedVector;
    }

}

void Client::UpdatePassword(const string& password, const int& account_number){
    client_data data;
    data.msg_id = 7;
    data.password = password; // To make clear to the server which type of message he receives
    data.account_number = account_number;
    QByteArray byteArray;
    QDataStream stream(&byteArray, QIODevice::WriteOnly);
    stream << data;
    socket->write(byteArray);
    if (socket->waitForReadyRead(5000)){
        QByteArray data = socket->readAll();
        qDebug()<<"THE MESSAGE for ID 2 FROM THE SERVER IS: "<< data;
    }
}



