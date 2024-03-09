#ifndef ACCOUNTDETAILS_H
#define ACCOUNTDETAILS_H

#include <QDialog>
#include "ClientActions.hpp"
#include "network.hpp"

namespace Ui {
class AccountDetails;
}

class AccountDetails : public QDialog
{
    Q_OBJECT

public:
    explicit AccountDetails(bank_account& client_account, Client& client_connection, QWidget *parent = nullptr);
    ~AccountDetails();
    void UpdateValues();
    void onDialogClosed();
    void ClearFields();

private slots:
    void on_btn_delete_account_clicked();
    void on_btn_delete_account_def_clicked();

    void on_btn_go_back_clicked();

    void on_btn_change_password_clicked();

    void on_btn_update_password_clicked();

    void on_btn_validate_password_clicked();

private:
    Ui::AccountDetails *ui;
    bank_account& account;  // Use reference for bank_account
    Client& client_socket;
};

#endif // ACCOUNTDETAILS_H
