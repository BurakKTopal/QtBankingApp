/********************************************************************************
** Form generated from reading UI file 'accountdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDETAILS_H
#define UI_ACCOUNTDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountDetails
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *btn_delete_account;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *txt_account_number;
    QLabel *label_3;
    QLineEdit *txt_name;
    QLabel *label_4;
    QLineEdit *txt_type;
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *txt_balance;
    QPushButton *btn_change_password;
    QWidget *page_2;
    QPushButton *btn_delete_account_def;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_3;
    QLabel *label_8;
    QLineEdit *txt_password_3;
    QLabel *label_7;
    QPushButton *btn_go_back;
    QWidget *page_4;
    QPushButton *btn_validate_password;
    QPushButton *btn_go_back_3;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLineEdit *txt_validate_password;
    QWidget *page_3;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_4;
    QLabel *label_9;
    QLineEdit *txt_new_password;
    QLabel *label_10;
    QLineEdit *txt_retry_new_password;
    QPushButton *btn_update_password;
    QPushButton *btn_go_back_2;

    void setupUi(QDialog *AccountDetails)
    {
        if (AccountDetails->objectName().isEmpty())
            AccountDetails->setObjectName("AccountDetails");
        AccountDetails->resize(608, 311);
        AccountDetails->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #4a4a4a;\n"
"}\n"
"\n"
"QDialog {\n"
"    background-color: #4a4a4a;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
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
"color:lightyellow;\n"
"font-family: Arial;\n"
"font-size: 15pt;\n"
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
"	color:lightblu"
                        "e;\n"
" 	gridline-color: gray\n"
"}\n"
"QHeaderView:vertical {\n"
"    background-color: #1f1f1f;\n"
"	color:lightblue;\n"
"    border: 1px solid #3a3a3a;\n"
"}"));
        stackedWidget = new QStackedWidget(AccountDetails);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 611, 311));
        page = new QWidget();
        page->setObjectName("page");
        btn_delete_account = new QPushButton(page);
        btn_delete_account->setObjectName("btn_delete_account");
        btn_delete_account->setGeometry(QRect(30, 250, 151, 29));
        btn_delete_account->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        formLayoutWidget = new QWidget(page);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(30, 40, 551, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        txt_account_number = new QLineEdit(formLayoutWidget);
        txt_account_number->setObjectName("txt_account_number");
        txt_account_number->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_account_number);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txt_name = new QLineEdit(formLayoutWidget);
        txt_name->setObjectName("txt_name");
        txt_name->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_name);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        txt_type = new QLineEdit(formLayoutWidget);
        txt_type->setObjectName("txt_type");
        txt_type->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, txt_type);

        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 0, 231, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font.setPointSize(14);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font: 900 14pt \"Segoe UI Black\";\n"
"color: lightgreen;"));
        horizontalLayoutWidget = new QWidget(page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 150, 551, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(15);
        label_6->setFont(font1);

        horizontalLayout->addWidget(label_6);

        txt_balance = new QLineEdit(horizontalLayoutWidget);
        txt_balance->setObjectName("txt_balance");
        txt_balance->setEnabled(false);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(10);
        font2.setBold(false);
        txt_balance->setFont(font2);
        txt_balance->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(txt_balance);

        btn_change_password = new QPushButton(page);
        btn_change_password->setObjectName("btn_change_password");
        btn_change_password->setGeometry(QRect(430, 250, 151, 29));
        btn_change_password->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        btn_delete_account_def = new QPushButton(page_2);
        btn_delete_account_def->setObjectName("btn_delete_account_def");
        btn_delete_account_def->setGeometry(QRect(370, 160, 151, 29));
        btn_delete_account_def->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 0);"));
        formLayoutWidget_2 = new QWidget(page_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(40, 120, 481, 31));
        formLayout_3 = new QFormLayout(formLayoutWidget_2);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(formLayoutWidget_2);
        label_8->setObjectName("label_8");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_8);

        txt_password_3 = new QLineEdit(formLayoutWidget_2);
        txt_password_3->setObjectName("txt_password_3");
        txt_password_3->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, txt_password_3);

        label_7 = new QLabel(page_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 50, 381, 81));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 900 14pt \"Segoe UI Black\";"));
        btn_go_back = new QPushButton(page_2);
        btn_go_back->setObjectName("btn_go_back");
        btn_go_back->setGeometry(QRect(40, 160, 93, 29));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        btn_validate_password = new QPushButton(page_4);
        btn_validate_password->setObjectName("btn_validate_password");
        btn_validate_password->setGeometry(QRect(400, 200, 131, 29));
        btn_go_back_3 = new QPushButton(page_4);
        btn_go_back_3->setObjectName("btn_go_back_3");
        btn_go_back_3->setGeometry(QRect(50, 200, 93, 29));
        horizontalLayoutWidget_2 = new QWidget(page_4);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(120, 90, 341, 89));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_2->addWidget(label_5);

        txt_validate_password = new QLineEdit(horizontalLayoutWidget_2);
        txt_validate_password->setObjectName("txt_validate_password");
        txt_validate_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_validate_password);

        stackedWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        formLayoutWidget_3 = new QWidget(page_3);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(40, 90, 481, 81));
        formLayout_4 = new QFormLayout(formLayoutWidget_3);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(formLayoutWidget_3);
        label_9->setObjectName("label_9");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_9);

        txt_new_password = new QLineEdit(formLayoutWidget_3);
        txt_new_password->setObjectName("txt_new_password");
        txt_new_password->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        txt_new_password->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, txt_new_password);

        label_10 = new QLabel(formLayoutWidget_3);
        label_10->setObjectName("label_10");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_10);

        txt_retry_new_password = new QLineEdit(formLayoutWidget_3);
        txt_retry_new_password->setObjectName("txt_retry_new_password");
        txt_retry_new_password->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        txt_retry_new_password->setEchoMode(QLineEdit::Password);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, txt_retry_new_password);

        btn_update_password = new QPushButton(page_3);
        btn_update_password->setObjectName("btn_update_password");
        btn_update_password->setGeometry(QRect(390, 180, 131, 29));
        btn_go_back_2 = new QPushButton(page_3);
        btn_go_back_2->setObjectName("btn_go_back_2");
        btn_go_back_2->setGeometry(QRect(40, 180, 93, 29));
        stackedWidget->addWidget(page_3);

        retranslateUi(AccountDetails);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AccountDetails);
    } // setupUi

    void retranslateUi(QDialog *AccountDetails)
    {
        AccountDetails->setWindowTitle(QCoreApplication::translate("AccountDetails", "Dialog", nullptr));
        btn_delete_account->setText(QCoreApplication::translate("AccountDetails", "Delete my account", nullptr));
        label_2->setText(QCoreApplication::translate("AccountDetails", "Account number", nullptr));
        label_3->setText(QCoreApplication::translate("AccountDetails", "Name holder", nullptr));
        label_4->setText(QCoreApplication::translate("AccountDetails", "Type", nullptr));
        label->setText(QCoreApplication::translate("AccountDetails", "Account details", nullptr));
        label_6->setText(QCoreApplication::translate("AccountDetails", "BALANCE:", nullptr));
        txt_balance->setText(QString());
        btn_change_password->setText(QCoreApplication::translate("AccountDetails", "Change Password", nullptr));
        btn_delete_account_def->setText(QCoreApplication::translate("AccountDetails", "Delete my account", nullptr));
        label_8->setText(QCoreApplication::translate("AccountDetails", "Give in your password", nullptr));
        label_7->setText(QCoreApplication::translate("AccountDetails", "Deleting is irreversible", nullptr));
        btn_go_back->setText(QCoreApplication::translate("AccountDetails", "Go Back", nullptr));
        btn_validate_password->setText(QCoreApplication::translate("AccountDetails", "Validate", nullptr));
        btn_go_back_3->setText(QCoreApplication::translate("AccountDetails", "Go Back", nullptr));
        label_5->setText(QCoreApplication::translate("AccountDetails", "Current password", nullptr));
        label_9->setText(QCoreApplication::translate("AccountDetails", "Give your new password", nullptr));
        label_10->setText(QCoreApplication::translate("AccountDetails", "Confirm your new password", nullptr));
        btn_update_password->setText(QCoreApplication::translate("AccountDetails", "Update password", nullptr));
        btn_go_back_2->setText(QCoreApplication::translate("AccountDetails", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountDetails: public Ui_AccountDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDETAILS_H
