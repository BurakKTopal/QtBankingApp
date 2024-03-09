#ifndef WITHDRAWMONEY_H
#define WITHDRAWMONEY_H
#include <QDialog>
#include "ClientActions.hpp"
#include "network.hpp"
namespace Ui {
class WithdrawMoney;
}

class WithdrawMoney : public QDialog
{
    Q_OBJECT

public:
    explicit WithdrawMoney(bank_account& client_account, Client& client_connection, QWidget *parent = nullptr);
    ~WithdrawMoney();

private slots:
    void on_btn_withdraw_clicked();
    void on_btn_deposit_money_2_clicked();
    void onDialogClosed();

private:
    Ui::WithdrawMoney *ui;
    Client& client_socket;  // Use reference for DatabaseEngine
    bank_account& account;  // Use reference for bank_account
};

#endif // WITHDRAWMONEY_H
