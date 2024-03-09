#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>
#include <QStandardItemModel>
#include "createaccount.h"
#include "depositmoney.h"
#include "withdrawmoney.h"
#include "accountdetails.h"
#include "transfermoneytootheraccount.h"
#include "network.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(bank_account& client_account, Client& client_connection, QWidget *parent = nullptr);
    ~MainWindow();
    void ClearFields();
    void DisplayTransfersToTables();
    void DeleteOldTransfers();

private slots:
    void on_btn_sign_up_clicked() {ptrCreateAccount->show(); };

    void on_btn_deposit_money_clicked() {ptrDepositMoney->show(); };

    void on_btn_login_clicked();

    void on_btn_withdraw_money_clicked() {ptrWithdrawMoney->show(); };

    void on_btn_account_details_clicked() {ptrAccountDetails->UpdateValues(); ptrAccountDetails->show();};

    void on_btn_refresh_transfers_clicked() {DeleteOldTransfers(); DisplayTransfersToTables(); };

    void on_btn_deposit_to_other_acount_clicked() {ptrTransferMoneyToOtherAccount->show();};

    void on_btn_log_out_clicked();

private:
    Ui::MainWindow *ui;
    CreateAccount* ptrCreateAccount;
    DepositMoney* ptrDepositMoney;
    WithdrawMoney* ptrWithdrawMoney;
    AccountDetails* ptrAccountDetails;
    TransferMoneyToOtherAccount* ptrTransferMoneyToOtherAccount;

    QStandardItemModel* OwnTranfersTable;
    QStandardItemModel* OtherTranfersTable;

    Client& connection;
    bank_account& account;
};
#endif // MAINWINDOW_H
