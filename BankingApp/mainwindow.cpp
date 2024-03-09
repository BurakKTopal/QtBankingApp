#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "ClientActions.hpp"
#include <QMessageBox>

MainWindow::MainWindow(bank_account& client_account, Client& client_connection, QWidget *parent)
    : QMainWindow(parent),
     ui(new Ui::MainWindow), account(client_account),
    connection(client_connection)
{
    ui->setupUi(this);
    ptrCreateAccount = new CreateAccount(account, connection);
    ptrDepositMoney = new DepositMoney(account, connection);
    ptrWithdrawMoney = new WithdrawMoney(account, connection);
    ptrAccountDetails = new AccountDetails(account, connection);
    ptrTransferMoneyToOtherAccount = new TransferMoneyToOtherAccount(account, connection);

    ui->stackedWidget->setCurrentIndex(0);

    OwnTranfersTable = new QStandardItemModel(this);
    OwnTranfersTable->setHorizontalHeaderLabels({"Amount(in BT)", "Date"});
    ui->table_withdrawals_N_deposit->setModel(OwnTranfersTable);

    OtherTranfersTable = new QStandardItemModel(this);
    OtherTranfersTable->setHorizontalHeaderLabels({"Amount(in BT)", "Sent by(name)", "Sent by(account number)", "Sent To", "Date"});
    ui->table_transfers->setModel(OtherTranfersTable);

}

MainWindow::~MainWindow()
{
    if (OtherTranfersTable) {
        OtherTranfersTable->removeRows(0, OtherTranfersTable->rowCount());
        delete OtherTranfersTable;
    }

    if (OwnTranfersTable) {
        OwnTranfersTable->removeRows(0, OwnTranfersTable->rowCount());
        delete OwnTranfersTable;
    }

    delete ptrTransferMoneyToOtherAccount;
    delete ptrAccountDetails;
    delete ptrWithdrawMoney;
    delete ptrDepositMoney;
    delete ptrCreateAccount;
    delete ui;
}

void MainWindow::DeleteOldTransfers(){
    // To update the transfers, the old ones first get deleted

    if (OtherTranfersTable) {
        OtherTranfersTable->removeRows(0, OtherTranfersTable->rowCount());
    }

    if (OwnTranfersTable) {
        OwnTranfersTable->removeRows(0, OwnTranfersTable->rowCount());
    }
}

void MainWindow::DisplayTransfersToTables(){
    // Set the headers for the model
    vector<transfer_data> transfers;
    transfers = connection.GetTransfers(account.GetAccountNumber());
    qDebug()<<"Transfers fetched!!!\n";
    for (transfer_data& transfer: transfers) {

        QList<QStandardItem*> rowData;
        if (transfer.to_account_number == 0) {
            rowData << new QStandardItem(QString::number(transfer.amount) + "BT") << new QStandardItem(QString::fromStdString(transfer.date));
            OwnTranfersTable->appendRow(rowData);
        }

        else {
            if(transfer.to_account_number == account.GetAccountNumber()) {
                // In case he receives a transfer
                // amount|transfered by(name)|transfered by(account_number)|transfered to(account_number)|date
                rowData << new QStandardItem(QString::number(transfer.amount) + "BT")
                        << new QStandardItem(QString::fromStdString(transfer.name))
                        << new QStandardItem(QString::number(transfer.account_number))
                        << new QStandardItem(QString::number(account.GetAccountNumber()) + "(YOU)")
                        << new QStandardItem(QString::fromStdString(transfer.date));

                OtherTranfersTable->appendRow(rowData);
            }
            else {
                // In case the client sends to someone else money
                rowData << new QStandardItem(QString::number(transfer.amount) + "BT")
                        << new QStandardItem(QString::fromStdString(account.GetName())+ "(YOU)")
                        << new QStandardItem(QString::number(account.GetAccountNumber()) + "(YOU)")
                        << new QStandardItem(QString::number(transfer.to_account_number))
                        << new QStandardItem(QString::fromStdString(transfer.date));

                OtherTranfersTable->appendRow(rowData);
            }
        }
    }
    ui->table_withdrawals_N_deposit->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->table_transfers->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void MainWindow::ClearFields(){
    ui->txt_account_number->clear(); // In case there is from the login data left
    ui->txt_password->clear();
}

void MainWindow::on_btn_login_clicked()
{
    int account_number = ui->txt_account_number->text().toInt();
    string password = ui->txt_password->text().toStdString();

    client_data client = connection.ReadClient(account_number);

    if (client.active){
        if(password == client.password){
            qDebug()<<"SUCCEFULLY LOGGED IN\n";
            account.SaveClient(client);
            ui->stackedWidget->setCurrentIndex(1);
            ui->label_account_number->setText("Account: " + QString::number(account.GetAccountNumber()));
            ui->label_name->setText("Hello " +  QString::fromStdString(account.GetName()) + "!");
            DisplayTransfersToTables();
            ClearFields();
            qDebug()<<"Data saved in account: NAME: "<<account.GetName()<<"ACCOUNT NUMBER"<<account.GetAccountNumber()<<"\n";
        }
        else {
        QMessageBox::warning(this, "Invalid password", "The password is wrongly given for the account number.");
        }
    }
    else{
        QMessageBox::warning(this, "Password Mismatch", "Passwords do not match. Please try again.");
    }
}

void MainWindow::on_btn_log_out_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    account.Reset();
    account.ResetOtherClient();
    DeleteOldTransfers();
}

