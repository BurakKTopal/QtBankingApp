#ifndef DELETEACCOUNT_H
#define DELETEACCOUNT_H

#include <QDialog>

namespace Ui {
class DeleteAccount;
}

class DeleteAccount : public QDialog
{
    Q_OBJECT

public:
    explicit DeleteAccount(QWidget *parent = nullptr);
    ~DeleteAccount();

private:
    Ui::DeleteAccount *ui;
};

#endif // DELETEACCOUNT_H
