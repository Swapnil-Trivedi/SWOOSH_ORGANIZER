#include "menu.h"
#include "ui_menu.h"
#include <QSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QString>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
QSqlQueryModel* refresh();
QString idno();
 QSqlDatabase db=QSqlDatabase::addDatabase("QMYSQL");
menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)

{
    ui->setupUi(this);
    ui->addbox->hide();
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setPort(3307);
    db.setDatabaseName("QT_DATABASE");
    if(!db.open())

    {
        QMessageBox::information(this,"NO","NOT CONNECTED");
        qDebug()<<db.lastError();
    }
    else
    {
        ui->tableView->setModel(refresh());
    }
}

QSqlQueryModel* refresh(){

    QSqlQueryModel *modal=new QSqlQueryModel();
    modal->setQuery("SELECT id as ID,Name as TASK_NAME,Priority as PRIORITY FROM ORGANIZER");
    return modal;
}

menu::~menu()
{
    delete ui;
}

void menu::on_update_clicked()
{
    QSqlQuery qry;
    qry.prepare("SELECT COUNT(*) FROM ORGANIZER WHERE Task_Status='0'");
    qry.exec();
    qry.first();
    QString ans=qry.value(0).toString();
    ui->label_8->setText(ans);
    qry.prepare("SELECT COUNT(*) FROM ORGANIZER WHERE Task_Status='1'");
    qry.exec();
    qry.first();
    ans=qry.value(0).toString();
    ui->label_10->setText(ans);
    qry.prepare("SELECT COUNT(*) FROM ORGANIZER WHERE Priority='HIGH'");
    qry.exec();
    qry.first();
    ans=qry.value(0).toString();
    ui->label_9->setText(ans);
    ui->tableView->setModel(refresh());
    ui->tableView->show();
    ui->addbox->hide();
}

void menu::on_pushButton_6_clicked()
{
    db.close();
    this->close();
}

void menu::on_pushButton_4_clicked()
{
    ui->tableView->hide();
    ui->addbox->show();

}
QString idno()
{
    QSqlQuery qry;
    qry.prepare("SELECT COUNT(*) FROM ORGANIZER");
    qry.exec();
    qry.first();
    qry.clear();
    qint16 ac=qry.value(0).toInt()+1;
    qDebug() << ac;
    QString a=(QString)ac;
    return a;

}
void menu::on_pushButton_7_clicked()
{   QSqlQuery qry;
    QString a=idno();
    int ac=a.toInt();
    qry.prepare("INSERT INTO ORGANIZER(id,Name,Priority,Task_Status)"
                " VALUES(:id, :Name, :Priority, :Task_Status)");
    qry.bindValue(":id",ac);
    qry.bindValue(":Name",ui->lineEdit_2->text().toUpper());
    qry.bindValue(":Priority",ui->lineEdit_3->text().toUpper());
    qry.bindValue(":Task_Status",ui->lineEdit_4->text());
    qry.exec();
    qry.clear();
    menu::on_update_clicked();
}

void menu::on_tableView_doubleClicked(const QModelIndex &index)
{
   QMessageBox::StandardButton reply = QMessageBox::question(this,"DELETE","YOU WANT TO DELETE THIS RECORD PERMANENTLY ??",QMessageBox::Yes | QMessageBox::No );
  if(reply==QMessageBox::Yes)
  {
     QSqlQuery qry;
     qry.prepare("DELETE FROM ORGANIZER WHERE id=? OR Name=? ");
     qry.addBindValue(index.data().toString());
     qry.addBindValue(index.data().toString());
     if(qry.exec())
     {
         menu::on_update_clicked();
     }
     qDebug()<<index.data().toInt();
     qDebug()<<index.data().toString();

  }
}

void menu::on_pushButton_2_clicked()
{
    QMessageBox::information(this,"info","Double Click on a record in view to Delete it ");
}
