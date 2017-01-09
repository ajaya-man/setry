#include "widget.h"
#include "ui_widget.h"
#include "newhome.h"
#include "newhome1.h"
#include "newhome2.h"
#include <QTimer>

#define Path_to_DB "C:/Users/shreetis13/Desktop/newse/untitled1/login.sqlite"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
     QTimer:: singleShot(5000,this,SLOT(showMaximized()));
     myDB= QSqlDatabase::addDatabase("QSQLITE");
     myDB.setDatabaseName(Path_to_DB);
     QFileInfo checkFile(Path_to_DB);


     if(checkFile.isFile())
     {
         if(myDB.open())
         {
             ui->Status->setText("PLEASE ENTER YOUR USERNAME AND PASSWORD ");
         }

 }
     else{ui->Status->setText("Failure connection to db file");}
}

Widget::~Widget()
{
    delete ui;
    qDebug()<<"     Closing the connection";
    myDB.close();
}

void Widget::on_AdminButton_clicked()
{
    Username=ui->User->text();
    Password=ui->Pass->text();
    Role="admin";
   if(checkdb())
   { newhome *admin=new newhome;
    admin->show();}
}
bool Widget::checkdb()
{
    if(!myDB.isOpen())
    {
        qDebug()<< "    No coonectn to db";
        return false;

    }
    QSqlQuery qry;
    if(qry.exec("SELECT username,password FROM login WHERE username=\'"+Username+"\' AND password=\'"+Password+"\' AND role=\'"+Role+"\' "))
    {
        if(qry.next())
        {
            ui->Status->setText("[+]VALID USERNAME AND PASSWORD");

        return true;
        }
        else
        {
            ui->Status->setText("   UNKNOWN USERNAME AND PASSWORD      ");
            return false;
        }
    }
}

void Widget::on_SuperButton_clicked()
{
    Username=ui->User->text();
    Password=ui->Pass->text();
    Role="supervisor";
  if(checkdb())
    {newhome1 *super=new newhome1;
    super->show();}
}

void Widget::on_StaffButton_clicked()
{
    Username=ui->User->text();
    Password=ui->Pass->text();
    Role="staff";
   if(checkdb())
    {newhome2 *staff=new newhome2;
    staff->show();}
}
