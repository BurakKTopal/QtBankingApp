#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H
#include "ClientActions.hpp"
#include "network.hpp"
#include <QDialog>

namespace Ui {
class CreateAccount;
}

class CreateAccount : public QDialog
{
    Q_OBJECT

public:
    CreateAccount(bank_account& client_account, Client& client_connection, QWidget *parent = nullptr);
    ~CreateAccount();
    void ClearFields();

private slots:
    void on_btn_create_account_clicked();

private:
    Ui::CreateAccount *ui;
    Client& client_socket;  // Use reference for DatabaseEngine
    bank_account& account;  // Use reference for bank_account
};

#endif // CREATEACCOUNT_H
