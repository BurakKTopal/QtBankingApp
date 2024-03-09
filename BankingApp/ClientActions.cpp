#include <iostream>
#include <string>
#include <sqlite3.h>
#include "ClientActions.hpp"
using namespace std;

bank_account::bank_account(){
    string password = "";
}

bool bank_account::DeleteAccount(const client_data& client) {
    cout << "Give in your password please: \n";
    string given_password;
    cin >> given_password;

    for (int i = 2; i > 0; i--) {
        if (client.password != given_password) {
            cout << "Wrong password, please give in the right one, " << i << " tries left\n";
            cin >> given_password;
        } else {
            cout << "Correct password!\n";
            return true;
        }
    }
    return false;
}

void bank_account::SaveClient(const client_data& client){
    // Function to save client attributes from fetched data.
    account_number = client.account_number;
    name = client.name;
    password = client.password;
    type = client.type;
    balance  = client.balance;
}

void bank_account::Reset(){
    this->account_number = 0;
    this->name = "";
    this->type = "";
    this->balance = 0.0;
    this->password = "";
}


void bank_account::ResetOtherClient(){
    // Deleting other client's data
    this->other_client.account_number = 0;
    this->other_client.password = "";
    this->other_client.type = "";
    this->other_client.active = false;
    this->other_client.name = "";
    this->other_client.balance = 0;
}
