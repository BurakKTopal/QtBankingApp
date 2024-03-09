#include "mainwindow.h"
#include <QApplication>
DatabaseEngine db_server; // Initializing the db
Server server(db_server);
int main(int argc, char *argv[])
{
    qputenv("QT_ASSUME_STDERR_HAS_CONSOLE", "1");
    QApplication a(argc, argv);
    MainWindow w(server, db_server);
    w.show();
    return a.exec();
}
