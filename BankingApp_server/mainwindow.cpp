#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(Server& server_, DatabaseEngine& server_db, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), db(server_db), server(server_)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_startServerButton_clicked() {
    server.listen(QHostAddress::LocalHost, 12345);
    ui->txt_status_server->setText("Server listening on port 12345...");
}



