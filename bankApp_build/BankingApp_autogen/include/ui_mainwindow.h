/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_login;
    QPushButton *btn_sign_up;
    QPushButton *btn_login;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txt_password;
    QLineEdit *txt_account_number;
    QLabel *label;
    QLabel *label_6;
    QPushButton *btn_password_forgot;
    QWidget *page_main_page;
    QPushButton *btn_account_details;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *table_transfers;
    QPushButton *btn_deposit_to_other_acount;
    QPushButton *btn_refresh_transfers;
    QWidget *tab_2;
    QTableView *table_withdrawals_N_deposit;
    QPushButton *btn_deposit_money;
    QPushButton *btn_withdraw_money;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_account_number;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_name;
    QPushButton *btn_log_out;
    QPushButton *btn_contact_us;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1122, 629);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
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
"QFormLayout{\n"
"background-color: lightgray;\n"
"}\n"
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
"QTableView::item:sele"
                        "cted {\n"
"    background-color: #4a4a4a;\n"
"	color:lightblue;\n"
" 	gridline-color: gray\n"
"}\n"
"QHeaderView:vertical {\n"
"    background-color: #1f1f1f;\n"
"	color:lightblue;\n"
"    border: 1px solid #3a3a3a;\n"
"}\n"
"\n"
"QTabWidget {\n"
"    background-color: gray; /* Dark background color for the entire QTabWidget */\n"
"    color: #ffffff; /* Text color for the tabs */\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background-color: #1f1f1f; /* Background color for individual tabs */\n"
"    border: 1px solid #444444; /* Border color for individual tabs */\n"
"    border-radius: 5px; /* Rounded corners for individual tabs */\n"
"    min-width: 100px; /* Minimum width for tabs */\n"
"    padding: 5px; /* Padding for tabs */\n"
"	color:lightyellow;\n"
"	font-size: 12pt;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: rgb(88, 88, 88);/* Background color for the selected tab */\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #444444; /* Border color for the tab content area */\n"
" "
                        "   border-top: none; /* Remove top border to align with the selected tab */\n"
"}\n"
"\n"
"QHBoxLayout{\n"
"border-radius: 10px;\n"
"border:1px;\n"
"}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(-10, 10, 1121, 611));
        page_login = new QWidget();
        page_login->setObjectName("page_login");
        btn_sign_up = new QPushButton(page_login);
        btn_sign_up->setObjectName("btn_sign_up");
        btn_sign_up->setGeometry(QRect(440, 310, 181, 41));
        btn_login = new QPushButton(page_login);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(630, 310, 181, 41));
        formLayoutWidget = new QWidget(page_login);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(330, 240, 481, 65));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(15);
        font.setBold(false);
        font.setItalic(false);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 15pt \"Arial\";"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font: 15pt \"Arial\";"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        txt_password = new QLineEdit(formLayoutWidget);
        txt_password->setObjectName("txt_password");
        txt_password->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));
        txt_password->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        txt_password->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, txt_password);

        txt_account_number = new QLineEdit(formLayoutWidget);
        txt_account_number->setObjectName("txt_account_number");
        txt_account_number->setStyleSheet(QString::fromUtf8("font: 12pt \"Arial\";"));

        formLayout->setWidget(0, QFormLayout::FieldRole, txt_account_number);

        label = new QLabel(page_login);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 180, 391, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font1.setPointSize(16);
        font1.setWeight(QFont::Black);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("font: 900 16pt \"Segoe UI Black\";\n"
"color:#999900;"));
        label_6 = new QLabel(page_login);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(330, 300, 101, 91));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        btn_password_forgot = new QPushButton(page_login);
        btn_password_forgot->setObjectName("btn_password_forgot");
        btn_password_forgot->setGeometry(QRect(440, 360, 371, 31));
        stackedWidget->addWidget(page_login);
        page_main_page = new QWidget();
        page_main_page->setObjectName("page_main_page");
        btn_account_details = new QPushButton(page_main_page);
        btn_account_details->setObjectName("btn_account_details");
        btn_account_details->setGeometry(QRect(20, 510, 191, 41));
        tabWidget = new QTabWidget(page_main_page);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(10, 120, 1081, 381));
        tab = new QWidget();
        tab->setObjectName("tab");
        QFont font2;
        font2.setPointSize(12);
        tab->setFont(font2);
        tab->setAutoFillBackground(false);
        table_transfers = new QTableView(tab);
        table_transfers->setObjectName("table_transfers");
        table_transfers->setGeometry(QRect(10, 70, 1061, 271));
        table_transfers->setAutoFillBackground(false);
        btn_deposit_to_other_acount = new QPushButton(tab);
        btn_deposit_to_other_acount->setObjectName("btn_deposit_to_other_acount");
        btn_deposit_to_other_acount->setGeometry(QRect(530, 10, 541, 51));
        btn_refresh_transfers = new QPushButton(tab);
        btn_refresh_transfers->setObjectName("btn_refresh_transfers");
        btn_refresh_transfers->setGeometry(QRect(10, 10, 511, 51));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        table_withdrawals_N_deposit = new QTableView(tab_2);
        table_withdrawals_N_deposit->setObjectName("table_withdrawals_N_deposit");
        table_withdrawals_N_deposit->setGeometry(QRect(10, 70, 1061, 271));
        btn_deposit_money = new QPushButton(tab_2);
        btn_deposit_money->setObjectName("btn_deposit_money");
        btn_deposit_money->setGeometry(QRect(530, 10, 541, 51));
        btn_withdraw_money = new QPushButton(tab_2);
        btn_withdraw_money->setObjectName("btn_withdraw_money");
        btn_withdraw_money->setGeometry(QRect(10, 10, 511, 51));
        tabWidget->addTab(tab_2, QString());
        label_5 = new QLabel(page_main_page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(520, 60, 101, 91));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../BankingAppImages/Logo_Def.png")));
        horizontalLayoutWidget = new QWidget(page_main_page);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(30, 50, 330, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_account_number = new QLabel(horizontalLayoutWidget);
        label_account_number->setObjectName("label_account_number");
        label_account_number->setStyleSheet(QString::fromUtf8("font: 16pt \"Arial\";"));

        horizontalLayout->addWidget(label_account_number);

        label_10 = new QLabel(page_main_page);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(450, 10, 281, 51));
        label_10->setStyleSheet(QString::fromUtf8("font: 900 20pt \"Segoe UI Black\";\n"
"color:#999900;"));
        horizontalLayoutWidget_2 = new QWidget(page_main_page);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(30, 0, 331, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(horizontalLayoutWidget_2);
        label_name->setObjectName("label_name");
        label_name->setStyleSheet(QString::fromUtf8("font: 16pt \"Arial\";"));

        horizontalLayout_2->addWidget(label_name);

        btn_log_out = new QPushButton(page_main_page);
        btn_log_out->setObjectName("btn_log_out");
        btn_log_out->setGeometry(QRect(900, 510, 191, 41));
        btn_contact_us = new QPushButton(page_main_page);
        btn_contact_us->setObjectName("btn_contact_us");
        btn_contact_us->setGeometry(QRect(460, 510, 181, 41));
        stackedWidget->addWidget(page_main_page);
        btn_account_details->raise();
        tabWidget->raise();
        horizontalLayoutWidget->raise();
        label_10->raise();
        horizontalLayoutWidget_2->raise();
        btn_log_out->raise();
        label_5->raise();
        btn_contact_us->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1122, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_sign_up->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        btn_login->setText(QCoreApplication::translate("MainWindow", "Log in", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Bank number", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        txt_password->setText(QString());
        txt_account_number->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to B-TOP Banking!", nullptr));
        label_6->setText(QString());
        btn_password_forgot->setText(QCoreApplication::translate("MainWindow", "Forgot Password?", nullptr));
        btn_account_details->setText(QCoreApplication::translate("MainWindow", "Account details", nullptr));
        btn_deposit_to_other_acount->setText(QCoreApplication::translate("MainWindow", "Deposit money to another account", nullptr));
        btn_refresh_transfers->setText(QCoreApplication::translate("MainWindow", "Refresh Transfers", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Transfers", nullptr));
        btn_deposit_money->setText(QCoreApplication::translate("MainWindow", "Deposit Money", nullptr));
        btn_withdraw_money->setText(QCoreApplication::translate("MainWindow", "Withdraw Money", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Withdrawals and deposits", nullptr));
        label_5->setText(QString());
        label_account_number->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "B-TOP Banking", nullptr));
        label_name->setText(QString());
        btn_log_out->setText(QCoreApplication::translate("MainWindow", "Log out", nullptr));
        btn_contact_us->setText(QCoreApplication::translate("MainWindow", "Contact Us", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
