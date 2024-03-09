#include "withdrawmoney.h"
#include "ui_withdrawmoney.h"
#include <QMessageBox>

WithdrawMoney::WithdrawMoney(bank_account& client_account, Client& client_connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::WithdrawMoney),account(client_account),
    client_socket(client_connection)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);  // Initialize right page
    connect(this, &WithdrawMoney::finished, this, &WithdrawMoney::onDialogClosed);
}

WithdrawMoney::~WithdrawMoney()
{
    delete ui;
}

void WithdrawMoney::onDialogClosed(){
    // Re-initialize the page after closing dialog.
    ui->txt_amount_2->clear();
    ui->txt_password_2->clear();
    ui->stackedWidget->setCurrentIndex(0);
}

void WithdrawMoney::on_btn_withdraw_clicked()
{
    double amount;
    amount = ui->txt_amount_2->text().toDouble();

    if (amount<=0){
        QMessageBox::warning(this, "Invalid deposit", "You can only deposit strictly positive amounts.");
    }
    else if(amount>5000) {
        QMessageBox::warning(this, "Invalid deposit", "The maximum amount is 5000.");
    }
    else if(account.GetBalance() - amount < 0) {
        QMessageBox::warning(this, "Insufficient Balance", "You have " + QString::number(account.GetBalance()) + " on your account");
    }
    else {
        ui->stackedWidget->setCurrentIndex(1);
    }
}


void WithdrawMoney::on_btn_deposit_money_2_clicked()
{
    double given_amount;
    qDebug()<<account.GetBalance()<<"\n";
    given_amount = ui->txt_amount_2->text().toDouble();
    string given_password = ui->txt_password_2->text().toStdString();

    if(given_password == account.GetPassword()){
        account.ChangeBalance(-1*given_amount); // Withdrawal is negative

        client_socket.UpdateBalance(account.GetBalance(), account.GetAccountNumber());
        client_socket.SaveTransfer(-1*given_amount, account.GetAccountNumber());

        ui->stackedWidget->setCurrentIndex(0);
        close();
    }
    else {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
}




