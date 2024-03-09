#include "transfermoneyotheraccounts.h"
#include "ui_transfermoneyotheraccounts.h"

TransferMoneyOtherAccounts::TransferMoneyOtherAccounts(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TransferMoneyOtherAccounts)
{
    ui->setupUi(this);
}

TransferMoneyOtherAccounts::~TransferMoneyOtherAccounts()
{
    delete ui;
}
