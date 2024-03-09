#include "transfermoneytootheraccount.h"
#include "ui_transfermoneytootheraccount.h"
#include <QMessageBox>

TransferMoneyToOtherAccount::TransferMoneyToOtherAccount(bank_account& client_account, Client& client_connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TransferMoneyToOtherAccount),account(client_account),
    client_socket(client_connection)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);  // Initialize right page
    connect(this, &TransferMoneyToOtherAccount::finished, this, &TransferMoneyToOtherAccount::onDialogClosed);
}

TransferMoneyToOtherAccount::~TransferMoneyToOtherAccount()
{
    delete ui;
}

void TransferMoneyToOtherAccount::onDialogClosed(){
    // Re-initialize the page after closing dialog.
    ui->txt_amount_2->clear();
    ui->txt_other_account_number->clear();
    ui->txt_password_2->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

void TransferMoneyToOtherAccount::on_btn_deposit_to_other_account_clicked()
{
    int given_account_number = ui->txt_other_account_number->text().toInt();
    double given_amount = ui->txt_amount_2->text().toDouble();
    if (given_amount<=0){
        QMessageBox::warning(this, "Invalid deposit", "You can only deposit strictly positive amounts.");
    }
    else if(given_amount>5000) {
        QMessageBox::warning(this, "Invalid deposit", "The maximum amount is 5000.");
    }
    else if(account.GetBalance() - given_amount < 0) {
        QMessageBox::warning(this, "Insufficient Balance", "You have " + QString::number(account.GetBalance()) + " on your account");
    }
    else {
        account.other_client = client_socket.ReadClient(given_account_number);

        if(account.other_client.active) {
            ui->stackedWidget->setCurrentIndex(1);
        }

        else {
            QMessageBox::warning(this, "Invalid account number", "The given account number does not exist.");
        }

    }

}

void TransferMoneyToOtherAccount::on_btn_deposit_money_to_other_account_clicked()
{
    double given_amount;
    qDebug()<<account.GetBalance()<<"\n";
    given_amount = ui->txt_amount_2->text().toDouble();
    string given_password = ui->txt_password_2->text().toStdString();

    if(given_password == account.GetPassword()){
        account.ChangeBalance(-1*given_amount); // Sending money to others results in negative
        account.other_client.balance += given_amount; //Other person's balance will increase.

        client_socket.UpdateBalance(account.GetBalance(), account.GetAccountNumber());
        client_socket.UpdateBalance(account.other_client.balance, account.other_client.account_number);
        client_socket.SaveTransfer(-1*given_amount, account.GetAccountNumber()); // Saving withdrawal
        client_socket.SaveTransfer(given_amount, account.GetAccountNumber(), account.other_client.account_number); // Saving transfer to other person
        account.ResetOtherClient(); // To clear data of the other client for future transactions

        ui->stackedWidget->setCurrentIndex(0);
        close();
    }
    else {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
}

