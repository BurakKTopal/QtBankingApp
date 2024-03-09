#include "depositmoney.h"
#include "ui_depositmoney.h"
#include "ClientActions.hpp"
#include <QMessageBox>

using namespace std;
DepositMoney::DepositMoney(bank_account& client_account, Client& client_connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::DepositMoney),account(client_account),
    client_socket(client_connection)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);  // Initialize right page
    connect(this, &DepositMoney::finished, this, &DepositMoney::onDialogClosed);
}

DepositMoney::~DepositMoney()
{
    delete ui;
}

void DepositMoney::onDialogClosed(){
    // Re-initialize page after closing dialog.
    ui->txt_amount->clear();
    ui->txt_password->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

void DepositMoney::on_btn_deposit_clicked()
{
    double deposit_money;
    deposit_money = ui->txt_amount->text().toDouble();
    if (deposit_money<=0){
        QMessageBox::warning(this, "Invalid deposit", "You can only deposit strictly positive amounts.");
    }
    else if(deposit_money>5000) {
        QMessageBox::warning(this, "Invalid deposit", "The maximum amount is 5000.");
    }
    else {
        ui->stackedWidget->setCurrentIndex(1);
    }
}

void DepositMoney::on_btn_deposit_money_clicked()
{
    double given_amount;
    qDebug()<<account.GetBalance()<<"\n";
    given_amount = ui->txt_amount->text().toDouble();
    string given_password = ui->txt_password->text().toStdString();

    qDebug()<<"THE PASSWORD OF THE CLIENT IS:"<<account.GetPassword()<<"\n";
    if(given_password == account.GetPassword()){
        account.ChangeBalance(given_amount); // Changing balance of the client

        client_socket.UpdateBalance(account.GetBalance(), account.GetAccountNumber());
        client_socket.SaveTransfer(given_amount, account.GetAccountNumber());

        ui->stackedWidget->setCurrentIndex(0);
        close();
    }
    else {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
}

