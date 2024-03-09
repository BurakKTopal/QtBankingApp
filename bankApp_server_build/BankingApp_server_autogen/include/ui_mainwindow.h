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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *txt_status_server;
    QPushButton *startServerButton;
    QLineEdit *txt_status_client;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(802, 575);
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
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 40, 181, 20));
        txt_status_server = new QLineEdit(centralwidget);
        txt_status_server->setObjectName("txt_status_server");
        txt_status_server->setGeometry(QRect(30, 60, 113, 26));
        startServerButton = new QPushButton(centralwidget);
        startServerButton->setObjectName("startServerButton");
        startServerButton->setGeometry(QRect(30, 120, 93, 29));
        txt_status_client = new QLineEdit(centralwidget);
        txt_status_client->setObjectName("txt_status_client");
        txt_status_client->setGeometry(QRect(190, 70, 113, 26));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 40, 151, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 802, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Status server", nullptr));
        startServerButton->setText(QCoreApplication::translate("MainWindow", "Start server", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Status client", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
