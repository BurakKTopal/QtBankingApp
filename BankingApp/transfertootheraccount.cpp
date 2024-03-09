#include "transfertootheraccount.h"
#include "ui_transfertootheraccount.h"

TransferToOtherAccount::TransferToOtherAccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TransferToOtherAccount)
{
    ui->setupUi(this);
}

TransferToOtherAccount::~TransferToOtherAccount()
{
    delete ui;
}
