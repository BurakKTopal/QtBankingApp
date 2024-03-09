#ifndef TRANSFERMONEYTOOTHERACCOUNT_H
#define TRANSFERMONEYTOOTHERACCOUNT_H
#include "ClientActions.hpp"
#include <QDialog>
#include "network.hpp"

namespace Ui {
class TransferMoneyToOtherAccount;
}

class TransferMoneyToOtherAccount : public QDialog
{
    Q_OBJECT

public:
    explicit TransferMoneyToOtherAccount(bank_account& client_account, Client& client_connection, QWidget *parent = nullptr);
    ~TransferMoneyToOtherAccount();
    void onDialogClosed();

private slots:
    void on_btn_deposit_to_other_account_clicked();
    void on_btn_deposit_money_to_other_account_clicked();

private:
    Ui::TransferMoneyToOtherAccount *ui;
    bank_account& account;  // Use reference for bank_account
    Client& client_socket;
};

#endif // TRANSFERMONEYTOOTHERACCOUNT_H
