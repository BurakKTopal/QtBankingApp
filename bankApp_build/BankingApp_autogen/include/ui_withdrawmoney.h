/********************************************************************************
** Form generated from reading UI file 'withdrawmoney.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAWMONEY_H
#define UI_WITHDRAWMONEY_H

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

class Ui_WithdrawMoney
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page_choosing_amount_2;
    QPushButton *btn_withdraw;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *txt_amount_2;
    QLabel *label_5;
    QLabel *label_7;
    QWidget *page_password_2;
    QLabel *label_6;
    QLineEdit *txt_password_2;
    QPushButton *btn_deposit_money_2;
    QLabel *label_8;

    void setupUi(QDialog *WithdrawMoney)
    {
        if (WithdrawMoney->objectName().isEmpty())
            WithdrawMoney->setObjectName("WithdrawMoney");
        WithdrawMoney->resize(677, 317);
        WithdrawMoney->setStyleSheet(QString::fromUtf8("QDialog {\n"
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
        stackedWidget = new QStackedWidget(WithdrawMoney);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 681, 321));
        page_choosing_amount_2 = new QWidget();
        page_choosing_amount_2->setObjectName("page_choosing_amount_2");
        btn_withdraw = new QPushButton(page_choosing_amount_2);
        btn_withdraw->setObjectName("btn_withdraw");
        btn_withdraw->setGeometry(QRect(410, 160, 93, 29));
        formLayoutWidget_2 = new QWidget(page_choosing_amount_2);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(130, 120, 371, 31));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName("label_4");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        txt_amount_2 = new QLineEdit(formLayoutWidget_2);
        txt_amount_2->setObjectName("txt_amount_2");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, txt_amount_2);

        label_5 = new QLabel(page_choosing_amount_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(130, 50, 471, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        label_5->setFont(font);
        label_7 = new QLabel(page_choosing_amount_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 260, 101, 91));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        stackedWidget->addWidget(page_choosing_amount_2);
        formLayoutWidget_2->raise();
        label_7->raise();
        label_5->raise();
        btn_withdraw->raise();
        page_password_2 = new QWidget();
        page_password_2->setObjectName("page_password_2");
        label_6 = new QLabel(page_password_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 70, 349, 45));
        label_6->setFont(font);
        txt_password_2 = new QLineEdit(page_password_2);
        txt_password_2->setObjectName("txt_password_2");
        txt_password_2->setGeometry(QRect(130, 120, 349, 26));
        txt_password_2->setEchoMode(QLineEdit::Password);
        btn_deposit_money_2 = new QPushButton(page_password_2);
        btn_deposit_money_2->setObjectName("btn_deposit_money_2");
        btn_deposit_money_2->setGeometry(QRect(360, 150, 121, 29));
        label_8 = new QLabel(page_password_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 260, 101, 91));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        stackedWidget->addWidget(page_password_2);
        label_8->raise();
        txt_password_2->raise();
        btn_deposit_money_2->raise();
        label_6->raise();

        retranslateUi(WithdrawMoney);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(WithdrawMoney);
    } // setupUi

    void retranslateUi(QDialog *WithdrawMoney)
    {
        WithdrawMoney->setWindowTitle(QCoreApplication::translate("WithdrawMoney", "Dialog", nullptr));
        btn_withdraw->setText(QCoreApplication::translate("WithdrawMoney", "Withdraw", nullptr));
        label_4->setText(QCoreApplication::translate("WithdrawMoney", "Amount", nullptr));
        label_5->setText(QCoreApplication::translate("WithdrawMoney", "Withdraw an amount between 0 and 5000:", nullptr));
        label_7->setText(QString());
        label_6->setText(QCoreApplication::translate("WithdrawMoney", "Enter password:", nullptr));
        btn_deposit_money_2->setText(QCoreApplication::translate("WithdrawMoney", "Withdraw Money", nullptr));
        label_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WithdrawMoney: public Ui_WithdrawMoney {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAWMONEY_H
