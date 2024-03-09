#ifndef CLIENT_HPP
#define CLIENT_HPP

#include <QTcpSocket>
#include "ClientActions.hpp"

struct transfer_data {
    int account_number;
    int to_account_number;
    string name;
    double amount;
    string date;
};

class Client : public QObject {
    Q_OBJECT

public:
    explicit Client(QObject* parent = nullptr);
    ~Client(){
        socket->close();
        delete socket;
    };

public slots:
    void connectToServer(const QString& address, quint16 port);
    void SaveClient(client_data &data);
    void UpdateBalance(const double& amount, const int& account_number);
    void SaveTransfer(const double& amount, const int& account_number, const int& to_account_number=0);
    client_data ReadClient(const int& account_number);
    void DeleteClient(const int& account_number);
    vector<transfer_data> GetTransfers(const int& account_number);
    void UpdatePassword(const string& password, const int& account_number);

private:
    QTcpSocket* socket;
};

#endif // CLIENT_HPP
