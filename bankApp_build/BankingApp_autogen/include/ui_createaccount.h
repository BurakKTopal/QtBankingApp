/********************************************************************************
** Form generated from reading UI file 'createaccount.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccount
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txt_bank_number;
    QLabel *label_2;
    QLineEdit *txt_account_holder;
    QLabel *label_3;
    QLineEdit *txt_password;
    QLabel *label_4;
    QLineEdit *txt_retry_password;
    QLabel *label_5;
    QLineEdit *txt_type_account;
    QLabel *label_6;
    QLineEdit *txt_initial_amount;
    QPushButton *btn_create_account;
    QLabel *label_7;

    void setupUi(QDialog *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName("CreateAccount");
        CreateAccount->resize(494, 279);
        CreateAccount->setStyleSheet(QString::fromUtf8("QDialog {\n"
"    background-color: #4a4a4a;\n"
"}\n"
"\n"
"QStackedWidget {\n"
"    background-color: #4a4a4a;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton {\n"
"background-color: gray;\n"
" border-radius : 15px;\n"
"color:lightblue;\n"
"}\n"
"\n"
"QLabel {\n"
"color:lightyellow;\n"
" font: 15pt \"Arial\";\n"
"font-family: Arial;\n"
"color: lightyellow;\n"
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
"    background-color: #4a4a4a;\n"
"	color:lightblue;\n"
" 	gridline-color: gray\n"
"}\n"
"QHeaderView:vertical {\n"
"    background-color: #1f1f1f;\n"
"	color:lightblue;\n"
"    "
                        "border: 1px solid #3a3a3a;\n"
"}"));
        formLayoutWidget = new QWidget(CreateAccount);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 10, 461, 211));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txt_bank_number = new QLineEdit(formLayoutWidget);
        txt_bank_number->setObjectName("txt_bank_number");

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_bank_number);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        txt_account_holder = new QLineEdit(formLayoutWidget);
        txt_account_holder->setObjectName("txt_account_holder");

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_account_holder);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        txt_password = new QLineEdit(formLayoutWidget);
        txt_password->setObjectName("txt_password");
        txt_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_password);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        txt_retry_password = new QLineEdit(formLayoutWidget);
        txt_retry_password->setObjectName("txt_retry_password");
        txt_retry_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, txt_retry_password);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        txt_type_account = new QLineEdit(formLayoutWidget);
        txt_type_account->setObjectName("txt_type_account");

        formLayout->setWidget(4, QFormLayout::FieldRole, txt_type_account);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        txt_initial_amount = new QLineEdit(formLayoutWidget);
        txt_initial_amount->setObjectName("txt_initial_amount");

        formLayout->setWidget(5, QFormLayout::FieldRole, txt_initial_amount);

        btn_create_account = new QPushButton(CreateAccount);
        btn_create_account->setObjectName("btn_create_account");
        btn_create_account->setGeometry(QRect(360, 230, 121, 41));
        label_7 = new QLabel(CreateAccount);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 220, 101, 91));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));

        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QDialog *CreateAccount)
    {
        CreateAccount->setWindowTitle(QCoreApplication::translate("CreateAccount", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateAccount", "Bank number", nullptr));
        label_2->setText(QCoreApplication::translate("CreateAccount", "Account holder", nullptr));
        label_3->setText(QCoreApplication::translate("CreateAccount", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("CreateAccount", "Re-enter password", nullptr));
        label_5->setText(QCoreApplication::translate("CreateAccount", "Type of account (C/S)", nullptr));
        label_6->setText(QCoreApplication::translate("CreateAccount", "Enter initial amount", nullptr));
        btn_create_account->setText(QCoreApplication::translate("CreateAccount", "Create account", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
