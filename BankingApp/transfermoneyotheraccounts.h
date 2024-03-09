#ifndef TRANSFERMONEYOTHERACCOUNTS_H
#define TRANSFERMONEYOTHERACCOUNTS_H

#include <QDialog>

namespace Ui {
class TransferMoneyOtherAccounts;
}

class TransferMoneyOtherAccounts : public QDialog
{
    Q_OBJECT

public:
    explicit TransferMoneyOtherAccounts(QWidget *parent = nullptr);
    ~TransferMoneyOtherAccounts();

private:
    Ui::TransferMoneyOtherAccounts *ui;
};

#endif // TRANSFERMONEYOTHERACCOUNTS_H
