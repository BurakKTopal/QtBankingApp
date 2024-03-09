/********************************************************************************
** Form generated from reading UI file 'transfermoneytootheraccount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFERMONEYTOOTHERACCOUNT_H
#define UI_TRANSFERMONEYTOOTHERACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TransferMoneyToOtherAccount
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_choosing_amount_2;
    QPushButton *btn_deposit_to_other_account;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLineEdit *txt_other_account_number;
    QLabel *label_7;
    QLineEdit *txt_amount_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QWidget *page_password_2;
    QLabel *label_6;
    QLineEdit *txt_password_2;
    QPushButton *btn_deposit_money_to_other_account;
    QLabel *label_10;

    void setupUi(QDialog *TransferMoneyToOtherAccount)
    {
        if (TransferMoneyToOtherAccount->objectName().isEmpty())
            TransferMoneyToOtherAccount->setObjectName("TransferMoneyToOtherAccount");
        TransferMoneyToOtherAccount->resize(680, 300);
        TransferMoneyToOtherAccount->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #4a4a4a;\n"
"	height: 330;\n"
"}\n"
"\n"
"QStackedWidget {\n"
"    background-color: #4a4a4a;\n"
"    color: #ffffff;\n"
"	width: 700;\n"
"	height: 330;\n"
"}\n"
"QPushButton {\n"
"background-color: gray;\n"
"border-radius: 10px;\n"
"color:lightblue;\n"
"}\n"
"\n"
"QLabel#label_main_menu,\n"
"QLabel#label_transfers,\n"
"QLabel#label_withdrawal_deposit {\n"
"    font: 20pt \"Arial\";\n"
"    color: lightyellow;\n"
"}\n"
"\n"
"QLabel {\n"
"color:lightblue;\n"
"font-family: Arial;\n"
"font-size: 12pt;\n"
"}\n"
"\n"
"QLineEdit {\n"
"font-family: Arial;\n"
"font-size: 10pt;\n"
"background-color: lightgray;	\n"
"border: 1px solid white;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QTableView {\n"
"    background-color: #2e2e2e;\n"
"    color:lightblue;\n"
"border-radius: 10px;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #1f1f1f;\n"
"	color:lightblue;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    border: 1px solid #3a3a3a;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
" "
                        "   background-color: #4a4a4a;\n"
"	color:lightblue;\n"
" 	gridline-color: gray\n"
"}\n"
"QHeaderView:vertical {\n"
"    background-color: #1f1f1f;\n"
"	color:lightblue;\n"
"    border: 1px solid #3a3a3a;\n"
"}"));
        stackedWidget = new QStackedWidget(TransferMoneyToOtherAccount);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 681, 300));
        page_choosing_amount_2 = new QWidget();
        page_choosing_amount_2->setObjectName("page_choosing_amount_2");
        btn_deposit_to_other_account = new QPushButton(page_choosing_amount_2);
        btn_deposit_to_other_account->setObjectName("btn_deposit_to_other_account");
        btn_deposit_to_other_account->setGeometry(QRect(450, 190, 93, 29));
        formLayoutWidget_2 = new QWidget(page_choosing_amount_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(170, 110, 371, 71));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        txt_other_account_number = new QLineEdit(formLayoutWidget_2);
        txt_other_account_number->setObjectName("txt_other_account_number");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txt_other_account_number);

        label_7 = new QLabel(formLayoutWidget_2);
        label_7->setObjectName("label_7");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        txt_amount_2 = new QLineEdit(formLayoutWidget_2);
        txt_amount_2->setObjectName("txt_amount_2");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, txt_amount_2);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(page_choosing_amount_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 40, 471, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        label_5->setFont(font);
        label_8 = new QLabel(page_choosing_amount_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 240, 101, 91));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        stackedWidget->addWidget(page_choosing_amount_2);
        page_password_2 = new QWidget();
        page_password_2->setObjectName("page_password_2");
        label_6 = new QLabel(page_password_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(180, 70, 349, 45));
        label_6->setFont(font);
        txt_password_2 = new QLineEdit(page_password_2);
        txt_password_2->setObjectName("txt_password_2");
        txt_password_2->setGeometry(QRect(180, 120, 349, 26));
        txt_password_2->setEchoMode(QLineEdit::Password);
        btn_deposit_money_to_other_account = new QPushButton(page_password_2);
        btn_deposit_money_to_other_account->setObjectName("btn_deposit_money_to_other_account");
        btn_deposit_money_to_other_account->setGeometry(QRect(410, 150, 121, 29));
        label_10 = new QLabel(page_password_2);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 240, 101, 91));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        stackedWidget->addWidget(page_password_2);

        retranslateUi(TransferMoneyToOtherAccount);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TransferMoneyToOtherAccount);
    } // setupUi

    void retranslateUi(QDialog *TransferMoneyToOtherAccount)
    {
        TransferMoneyToOtherAccount->setWindowTitle(QCoreApplication::translate("TransferMoneyToOtherAccount", "Dialog", nullptr));
        btn_deposit_to_other_account->setText(QCoreApplication::translate("TransferMoneyToOtherAccount", "Deposit", nullptr));
        label_7->setText(QCoreApplication::translate("TransferMoneyToOtherAccount", "Account number:", nullptr));
        label_4->setText(QCoreApplication::translate("TransferMoneyToOtherAccount", "Amount:", nullptr));
        label_5->setText(QCoreApplication::translate("TransferMoneyToOtherAccount", "Deposit an amount between 0 and 5000:", nullptr));
        label_8->setText(QString());
        label_6->setText(QCoreApplication::translate("TransferMoneyToOtherAccount", "Enter password:", nullptr));
        btn_deposit_money_to_other_account->setText(QCoreApplication::translate("TransferMoneyToOtherAccount", "Deposit Money", nullptr));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TransferMoneyToOtherAccount: public Ui_TransferMoneyToOtherAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFERMONEYTOOTHERACCOUNT_H
