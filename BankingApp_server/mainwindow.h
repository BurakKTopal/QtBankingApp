#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "DataBaseManager.hpp"
#include "server.hpp"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Server& server, DatabaseEngine& server_db, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startServerButton_clicked();

private:
    Ui::MainWindow *ui;
    DatabaseEngine& db;
    Server& server;
};
#endif // MAINWINDOW_H
