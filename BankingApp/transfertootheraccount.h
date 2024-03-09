#ifndef TRANSFERTOOTHERACCOUNT_H
#define TRANSFERTOOTHERACCOUNT_H

#include <QDialog>

namespace Ui {
class TransferToOtherAccount;
}

class TransferToOtherAccount : public QDialog
{
    Q_OBJECT

public:
    explicit TransferToOtherAccount(QWidget *parent = nullptr);
    ~TransferToOtherAccount();

private:
    Ui::TransferToOtherAccount *ui;
};

#endif // TRANSFERTOOTHERACCOUNT_H
