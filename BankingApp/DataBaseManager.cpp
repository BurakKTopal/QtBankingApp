#include <iostream>
#include <string>
#include <sqlite3.h>
#include <chrono>
#include <ctime>
#include "DataBaseManager.hpp"
using namespace std;

DatabaseEngine::DatabaseEngine() {
    //db_name = "C:/Users/Burak/OneDrive/Bureaublad/Programmeren/SQL/MySQL/ClientData.db"; // Name of the data base
    db_name = "ClientData.db"; // Name of the data base
    db_client_account_name = "client";
    db_client_transfer_name = "client_transfer";
    client_data.active = false;
}

void DatabaseEngine::Reset() {
    // Deleting own client's data
    this->client_data.account_number = 0;
    this->client_data.password = "";
    this->client_data.type = "";
    this->client_data.active = false;
    this->client_data.name = "";
    this->client_data.balance = 0;
}
void DatabaseEngine::ResetOtherClient() {
    // Deleting other client's data
    this->other_client_data.account_number = 0;
    this->other_client_data.password = "";
    this->other_client_data.type = "";
    this->other_client_data.active = false;
    this->other_client_data.name = "";
    this->other_client_data.balance = 0;
}


int DatabaseEngine::SaveClient(const column& data) {
    // Open or create a database file
    sqlite3* db_sqlite;
    int rc = sqlite3_open(db_name, &db_sqlite);

    if (rc) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db_sqlite) << endl;
        return rc;
    }

    string query = "INSERT INTO "+ db_client_account_name + " VALUES ("
                   + to_string(data.account_number)
                   + ", '" + data.password + "'"
                   + ", '" + data.name + "'"
                   + ", '" + data.type + "'"
                   + ", " + to_string(data.balance) + ");";

    rc = sqlite3_exec(db_sqlite, query.c_str(), 0, 0, 0);

    if(rc == SQLITE_CONSTRAINT){
        std::cerr << "The given Bank acount number is already in use!\n";
    }
    else if (rc != SQLITE_OK) {
        std::cerr << "Cannot insert data: " << sqlite3_errmsg(db_sqlite) << endl;
        sqlite3_close(db_sqlite);
        return rc;
    }


    // Close the database
    sqlite3_close(db_sqlite);

    std::cout << "Data saved successfully!" << std::endl;

    return 0;
}

int callbackReadClient(void* data, int argc, char** argv, char** azColName) {
    column& responseData = *static_cast<column*>(data);
    for (int i = 0; i < argc; i++) {
        responseData.active = true;
        string colName(azColName[i]);
        string val(argv[i]);
        if (colName == "account_number") {
            responseData.account_number = stoi(val);
        }
        else if (colName == "password") {
            responseData.password = val;
        }
        else if (colName == "name") {
            responseData.name = val;
        }
        else if (colName == "type") {
            responseData.type = val;
        }
        else if (colName == "money_deposit") {
            responseData.balance = stoi(val);
        }
    }
    return 0;
}

void DatabaseEngine::ReadClient(int* account_number, column& client) {
    // Open or create a database file
    sqlite3* db_sqlite;
    int rc = sqlite3_open(db_name, &db_sqlite);

    if (rc) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db_sqlite) << std::endl;
    }

    // Insert data into the table
    string query = "SELECT * FROM " + db_client_account_name + " WHERE account_number=" + to_string(*account_number) + ";";

    rc = sqlite3_exec(db_sqlite, query.c_str(), callbackReadClient, static_cast<void*>(&client), 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Cannot READ data: " << sqlite3_errmsg(db_sqlite) << std::endl;
        sqlite3_close(db_sqlite);
    }
    // Close the database
    sqlite3_close(db_sqlite);

}


void DatabaseEngine::UpdateClientBalance(const double& new_balance, const int& account_number) {

    // Open or create a database file
    sqlite3* db_sqlite;
    int rc = sqlite3_open(db_name, &db_sqlite);

    if (rc) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db_sqlite) << std::endl;
    }

    // Insert data into the table
    string sql_query = "UPDATE "+ db_client_account_name + " SET "
                       "money_deposit = " + to_string(new_balance) +
                        " WHERE account_number = " + to_string(account_number);

    rc = sqlite3_exec(db_sqlite, sql_query.c_str(), 0, 0, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Cannot READ data: " << sqlite3_errmsg(db_sqlite) << std::endl;
        sqlite3_close(db_sqlite);
    }
    // Close the database
    sqlite3_close(db_sqlite);
}

void DatabaseEngine::DeleteClient() {
    // Open or create a database file
    sqlite3* db_sqlite;
    int rc = sqlite3_open(db_name, &db_sqlite);

    if (rc) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db_sqlite) << std::endl;
    }

    // Insert data into the table
    string sql_query = "DELETE FROM " + db_client_account_name + " WHERE account_number = "+ to_string(client_data.account_number)+";";

    rc = sqlite3_exec(db_sqlite, sql_query.c_str(), 0, 0, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Cannot READ data: " << sqlite3_errmsg(db_sqlite) << std::endl;
        sqlite3_close(db_sqlite);
    }
    else {
        // Close the database
        sqlite3_close(db_sqlite);
        Reset(); // Only resetting in case of success.
        cout<<"SUCCESFULLY DELETED\n";
    }
}

string DatabaseEngine::GetDate() {

    // Get the current time point
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();

    // Convert the time point to a time_t object
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);

    // Convert the time_t object to a struct tm
    std::tm* timeInfo = std::localtime(&currentTime);

    // Format the date and time as a string
    std::string DateTime = std::to_string(timeInfo->tm_year + 1900) + '-' +
                                    std::to_string(timeInfo->tm_mon + 1) + '-' +
                                    std::to_string(timeInfo->tm_mday) + ' ' +
                                    std::to_string(timeInfo->tm_hour) + ':' +
                                    std::to_string(timeInfo->tm_min) + ':' +
                                    std::to_string(timeInfo->tm_sec);

    return DateTime;

}

void DatabaseEngine::SaveTransfer(double amount, int to_account_number) {
    //account_number|to_account_number|name|amount|date

    // Open or create a database file
    sqlite3* db_sqlite;
    int rc = sqlite3_open(db_name, &db_sqlite);

    if (rc) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db_sqlite) << std::endl;
    }

    string DateTime = GetDate(); // Getting date of current transaction

    // Insert data into the table
    string sql_query = "INSERT INTO "+ db_client_transfer_name + " VALUES ("
                       + to_string(client_data.account_number)
                       + ", " + to_string(to_account_number)
                       + ", '" + client_data.name + "'"
                       + ", " + to_string(amount)
                       + ", '" + DateTime + "');";
    cout <<"THE QUERY: "<<sql_query<<"\n";
    rc = sqlite3_exec(db_sqlite, sql_query.c_str(), 0, 0, 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Cannot READ data: " << sqlite3_errmsg(db_sqlite) << std::endl;
        sqlite3_close(db_sqlite);
    }
    else {
        // Close the database
        sqlite3_close(db_sqlite);
        cout<<"NEW DATA INJECTED IN TRANSFERS...\n";
    }
}

int callbackTransfers(void* data, int argc, char** argv, char** azColName) {
    vector<transfer_data>& transfers = *static_cast<vector<transfer_data>*>(data);
    transfer_data transfer;
    for (int i = 0; i < argc; i++) {
        string colName(azColName[i]);
        string val(argv[i]);
        if (colName =="account_number") {
            transfer.account_number = stoi(val);
        }
        else if (colName == "to_account_number") {
            transfer.to_account_number = stoi(val);
        }
        else if (colName == "name") {
            transfer.name = val;
        }
        else if (colName == "amount") {
            transfer.amount = stoi(val);
        }
        else if (colName == "date") {
            transfer.date = val;
        }
    }
    transfers.insert(transfers.begin(), transfer); // Showing the most recent transfers in the beginning

    return 0;
}

vector<transfer_data> DatabaseEngine::GetTransfers() {
    vector<transfer_data> transfers;

    // Open or create a database file
    sqlite3* db_sqlite;
    int rc = sqlite3_open(db_name, &db_sqlite);

    if (rc) {
        std::cerr << "Cannot open database: " << sqlite3_errmsg(db_sqlite) << std::endl;
    }

    // Insert data into the table
    string query = "SELECT * FROM " + db_client_transfer_name + " WHERE account_number=" + to_string(client_data.account_number) +
                   " OR " + "to_account_number=" + to_string(client_data.account_number) + ";";

    rc = sqlite3_exec(db_sqlite, query.c_str(), callbackTransfers, static_cast<void*>(&transfers), 0);

    if (rc != SQLITE_OK) {
        std::cerr << "Cannot READ data: " << sqlite3_errmsg(db_sqlite) << std::endl;
        sqlite3_close(db_sqlite);
    }
    // Close the database
    sqlite3_close(db_sqlite);
    return transfers;
}
