// server.h
#ifndef SERVER_HPP
#define SERVER_HPP

#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>
#include <QEventLoop>
#include "DataBaseManager.hpp"


class Server : public QTcpServer {
    Q_OBJECT

public:
    explicit Server(DatabaseEngine& server_db, QObject* parent = nullptr);
    ~Server(){
        // Deleting sockets from memory
        for(QTcpSocket* client_connection: client_connections){
            if (client_connection->state() == QAbstractSocket::ConnectedState){
                client_connection->close();
            }

            delete client_connection;
        }

        // Deleting threads from memory
        for(QThread* thread: client_threads){
            thread->quit();
            thread->wait(); // Wait for the thread to finish
        }
    };

    QByteArray CreateArrayOfTransfers(const int& account_number);
protected:
    void incomingConnection(qintptr socketDescriptor) override;

public slots:
    //void readData();
    void HandleClient(QTcpSocket* client_connection);

private:
    std::vector<QTcpSocket*> client_connections;
    std::vector<QThread*> client_threads;
    DatabaseEngine& db;

};

#endif // SERVER_HPP
