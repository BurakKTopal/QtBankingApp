#ifndef DEPOSITMONEY_H
#define DEPOSITMONEY_H

#include <QDialog>
#include "ClientActions.hpp"
#include "network.hpp"

namespace Ui {
class DepositMoney;
}

class DepositMoney : public QDialog
{
    Q_OBJECT

public:
    DepositMoney(bank_account& client_account, Client& client_connection, QWidget *parent = nullptr);
    ~DepositMoney();

private slots:
    void on_btn_deposit_clicked();
    void onDialogClosed();
    void on_btn_deposit_money_clicked();

private:
    Ui::DepositMoney *ui;
    Client& client_socket;  // Use reference for DatabaseEngine
    bank_account& account;  // Use reference for bank_account
};

#endif // DEPOSITMONEY_H
