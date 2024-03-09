#include "mainwindow.h"
#include "ClientActions.hpp"
#include <QApplication>

bank_account account; // Initializing the account
Client client_connection;

int main(int argc, char *argv[])
{
    qputenv("QT_ASSUME_STDERR_HAS_CONSOLE", "1");
    client_connection.connectToServer("127.0.0.1", 12345);
    QApplication a(argc, argv);
    MainWindow w(account, client_connection);
    w.show();
    return a.exec();
}
