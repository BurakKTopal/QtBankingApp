#include "createaccount.h"
#include "ui_createaccount.h"
#include "ClientActions.hpp"
#include <QMessageBox>

using namespace std;
CreateAccount::CreateAccount(bank_account& client_account, Client& client_connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateAccount),account(client_account),
    client_socket(client_connection)
{
    qDebug()<<"CREATE ACCOUNT ITEMS CREATED\n";
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::ClearFields(){
    // Clearing all fields
    ui->txt_bank_number->clear();
    ui->txt_account_holder->clear();
    ui->txt_password->clear();
    ui->txt_retry_password->clear();
    ui->txt_type_account->clear();
    ui->txt_initial_amount->clear();
}

void CreateAccount::on_btn_create_account_clicked()
{
    client_data data;
    data.account_number = ui->txt_bank_number->text().toInt();
    data.name = ui->txt_account_holder->text().toStdString();
    data.password = ui->txt_password->text().toStdString();
    string retry_password = ui->txt_retry_password->text().toStdString();
    data.type = ui->txt_type_account->text().toStdString();
    data.balance = ui->txt_initial_amount->text().toDouble();
    qDebug()<<"The data is: "<<retry_password<<"\n";

    if (data.password != retry_password){
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
    else {
        client_socket.SaveClient(data);
        qDebug()<<"DATA SAVED!";
        close(); // Close dialog
        ClearFields(); // Clear filled in fields in the dialog
    }
}
