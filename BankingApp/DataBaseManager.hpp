#include <sqlite3.h>
#include <string>
#include <vector>
#include "ClientActions.hpp"
#ifndef DATABASEMANAGER_HPP
#define DATABASEMANAGER_HPP

using namespace std;
struct transfer_data {
    int account_number;
    int to_account_number;
    string name;
    double amount;
    string date;
};

class DatabaseEngine {
private:
    const char* db_name;
    string db_client_account_name;
    string db_client_transfer_name;
public:
    client_data client_data;
    client_data other_client;
public:
    string getClientPassword(){return client_data.password;};
    bool IsClientFound(){return client_data.active;};
    bool IsOtherClientFound(){return other_client.active;};
    DatabaseEngine();
    int SaveClient(const client_data &data);
    void ReadClient(int* account_number, client_data& client);
    void UpdateClientBalance(const double& new_balance, const int& account_number);
    void DeleteClient();
    void Reset();
    void ResetOtherClient();
    void SaveTransfer(double amount, int to_account_number = 0);
    string GetDate();
    client_data ReadOtherClient(int* account_number);

    vector<transfer_data> GetTransfers();
};


#endif // DATABASEMANAGER_HPP
