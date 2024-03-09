#include "accountdetails.h"
#include "ui_accountdetails.h"
#include <QMessageBox>

AccountDetails::AccountDetails(bank_account& client_account, Client& client_connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountDetails),account(client_account), client_socket(client_connection)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    connect(this, &AccountDetails::finished, this, &AccountDetails::onDialogClosed);
    // To only need one function for three separate buttons.
    connect(ui->btn_go_back, &QPushButton::clicked, this, &AccountDetails::on_btn_go_back_clicked);
    connect(ui->btn_go_back_2, &QPushButton::clicked, this, &AccountDetails::on_btn_go_back_clicked);
    connect(ui->btn_go_back_3, &QPushButton::clicked, this, &AccountDetails::on_btn_go_back_clicked);
}

AccountDetails::~AccountDetails()
{
    delete ui;
}

void AccountDetails::UpdateValues() {

    client_data data = client_socket.ReadClient(account.GetAccountNumber());
    account.SaveClient(data);

    // Updating the account details
    ui->txt_name->setText(QString::fromStdString(account.GetName()));
    ui->txt_account_number->setText(QString::number(account.GetAccountNumber()));
    ui->txt_type->setText(QString::fromStdString(account.GetType()));
    ui->txt_balance->setText(QString::number(account.GetBalance()));
}



void AccountDetails::onDialogClosed(){
    // Re-initialize page after closing dialog.
    ui->txt_password_3->clear();
    ui->stackedWidget->setCurrentIndex(0);
}



void AccountDetails::on_btn_delete_account_clicked()
{

    ui->stackedWidget->setCurrentIndex(1);


}

void AccountDetails::on_btn_delete_account_def_clicked()
{

    string given_password = ui->txt_password_3->text().toStdString();
    if(account.GetPassword() != given_password) {
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
    else {
        client_socket.DeleteClient(account.GetAccountNumber());
        account.Reset();
        ui->stackedWidget->setCurrentIndex(0);
    }

}

void AccountDetails::ClearFields(){
    ui->txt_password_3->clear();
    ui->txt_validate_password->clear();
    ui->txt_new_password->clear();
    ui->txt_retry_new_password->clear();
}
void AccountDetails::on_btn_go_back_clicked()
{
    {
        ClearFields();
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void AccountDetails::on_btn_change_password_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void AccountDetails::on_btn_update_password_clicked()
{
    string new_password = ui->txt_new_password->text().toStdString();
    string retry_password = ui->txt_retry_new_password->text().toStdString();
    if (new_password != retry_password){
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
    else {
        client_socket.UpdatePassword(new_password, account.GetAccountNumber());
        ui->stackedWidget->setCurrentIndex(0);
        ClearFields();
        close();
    }
}


void AccountDetails::on_btn_validate_password_clicked()
{
    string given_password = ui->txt_validate_password->text().toStdString();
    if (given_password != account.GetPassword()){
        QMessageBox::warning(this, "Password invalid", "Password is not valid, please try again.");
    }
    else {
            ui->stackedWidget->setCurrentIndex(3);
            ClearFields();
    }
}

