#include <string>
#ifndef CLIENTACTIONS_HPP
#define CLIENTACTIONS_HPP
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

class bank_account{
    int account_number;
    string name;
    string type;
    double balance;
    string password;

public:
    client_data other_client;

public:
    bank_account();
    bool DeleteAccount(const client_data& data);
    void SaveClient(const client_data& data);
    void ChangeBalance(double money){balance += money;};
    void Reset();
    void ResetOtherClient();

    // Getters
    string GetName(){return name;};
    int GetAccountNumber(){return account_number;};
    string GetType(){return type;};
    double GetBalance(){return balance;};
    string GetPassword(){return password;};

};

#endif // CLIENTACTIONS_HPP
