#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "menu.h"
#include <QSql>
#include <QSqlDriver>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    second = new menu();
    const QString DRIVER="QMYSQL";
    if(QSqlDatabase::isDriverAvailable(DRIVER))
    {   statusBar()->showMessage("Database Driver Connected...");

     }
    else
    {
        statusBar()->showMessage("Database Driver failed...");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    second->show();
    this->close();

}

