#include <sqlite3.h>
#include <string>
#include <vector>

#ifndef DATABASEMANAGER_HPP
#define DATABASEMANAGER_HPP

using namespace std;

struct client_data {
    int account_number;
    string password;
    string name;
    string type;
    double balance;
    bool active;
    int msg_id;
    int to_account_number;
}; // Struct for saving client_data name and its value



struct transfer_data {
    int account_number;
    int to_account_number;
    string name;
    double amount;
    string date;
}; // The struct for sending the transfers of the client

class DatabaseEngine {
private:
    const char* db_name;
    string db_client_account_name;
    string db_client_transfer_name;

public:
    client_data client;
    client_data other_client;

public:
    string getClientPassword(){return client.password;};
    bool IsClientFound(){return client.active;};
    bool IsOtherClientFound(){return other_client.active;};
    DatabaseEngine();
    int SaveClient(const client_data &data);
    client_data ReadClient(const int& account_number);
    int UpdateClientBalance(const double& new_balance, const int& account_number);
    int UpdateClientPassword(const string& password, const int& account_number);
    int DeleteClient(const int& account_number);
    void Reset();
    void ResetOtherClient();
    int SaveTransfer(const double& amount, const int& account_number, const int& to_account_number=0) ;
    string GetDate();
    client_data ReadOtherClient(int* account_number);

    vector<transfer_data> GetTransfers(const int& account_number);
};


#endif // DATABASEMANAGER_HPP
