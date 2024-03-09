/********************************************************************************
** Form generated from reading UI file 'depositmoney.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPOSITMONEY_H
#define UI_DEPOSITMONEY_H

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

class Ui_DepositMoney
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_choosing_amount;
    QPushButton *btn_deposit;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *txt_amount;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *page_password;
    QLabel *label_3;
    QLineEdit *txt_password;
    QPushButton *btn_deposit_money;
    QLabel *label_7;

    void setupUi(QDialog *DepositMoney)
    {
        if (DepositMoney->objectName().isEmpty())
            DepositMoney->setObjectName("DepositMoney");
        DepositMoney->setEnabled(true);
        DepositMoney->resize(680, 300);
        DepositMoney->setStyleSheet(QString::fromUtf8("QDialog {\n"
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
"    background-color: #4a4a4a;\n"
"	color:lightbl"
                        "ue;\n"
" 	gridline-color: gray\n"
"}\n"
"QHeaderView:vertical {\n"
"    background-color: #1f1f1f;\n"
"	color:lightblue;\n"
"    border: 1px solid #3a3a3a;\n"
"}"));
        stackedWidget = new QStackedWidget(DepositMoney);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 700, 300));
        page_choosing_amount = new QWidget();
        page_choosing_amount->setObjectName("page_choosing_amount");
        btn_deposit = new QPushButton(page_choosing_amount);
        btn_deposit->setObjectName("btn_deposit");
        btn_deposit->setGeometry(QRect(520, 150, 93, 29));
        formLayoutWidget = new QWidget(page_choosing_amount);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(150, 110, 461, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        txt_amount = new QLineEdit(formLayoutWidget);
        txt_amount->setObjectName("txt_amount");

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_amount);

        txt_amount->raise();
        label->raise();
        label_2 = new QLabel(page_choosing_amount);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(150, 40, 471, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("    font: 15pt \"Arial\";\n"
"    color: lightyellow;"));
        label_6 = new QLabel(page_choosing_amount);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 240, 101, 91));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        stackedWidget->addWidget(page_choosing_amount);
        formLayoutWidget->raise();
        label_6->raise();
        label_2->raise();
        btn_deposit->raise();
        page_password = new QWidget();
        page_password->setObjectName("page_password");
        label_3 = new QLabel(page_password);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(160, 60, 349, 45));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("    font: 15pt \"Arial\";\n"
"    color: lightyellow;"));
        txt_password = new QLineEdit(page_password);
        txt_password->setObjectName("txt_password");
        txt_password->setGeometry(QRect(160, 100, 349, 26));
        txt_password->setEchoMode(QLineEdit::Password);
        btn_deposit_money = new QPushButton(page_password);
        btn_deposit_money->setObjectName("btn_deposit_money");
        btn_deposit_money->setGeometry(QRect(390, 130, 121, 29));
        label_7 = new QLabel(page_password);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 240, 101, 91));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        stackedWidget->addWidget(page_password);

        retranslateUi(DepositMoney);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DepositMoney);
    } // setupUi

    void retranslateUi(QDialog *DepositMoney)
    {
        DepositMoney->setWindowTitle(QCoreApplication::translate("DepositMoney", "Dialog", nullptr));
        btn_deposit->setText(QCoreApplication::translate("DepositMoney", "Deposit", nullptr));
        label->setText(QCoreApplication::translate("DepositMoney", "Amount:", nullptr));
        label_2->setText(QCoreApplication::translate("DepositMoney", "Deposit an amount between 0 and 5000:", nullptr));
        label_6->setText(QString());
        label_3->setText(QCoreApplication::translate("DepositMoney", "Enter password:", nullptr));
        btn_deposit_money->setText(QCoreApplication::translate("DepositMoney", "Deposit Money", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DepositMoney: public Ui_DepositMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPOSITMONEY_H
