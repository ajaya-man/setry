#include "widget.h"
#include "ui_widget.h"
#include "newhome.h"
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
    QString Username, Password,Role;
    Username=ui->User->text();
    Password=ui->Pass->text();
   // Role="admin"
    if(!myDB.isOpen())
    {
        qDebug()<< "    No coonectn to db";
        return;

    }
    QSqlQuery qry;
    if(qry.exec("SELECT username,password FROM login WHERE username=\'"+Username+"\' AND password=\'"+Password+"\'  "))
    {
        if(qry.next())
        {
            ui->Status->setText("[+]VALID USERNAME AND PASSWORD");
            QString msg = "\t \t LOGIN SUCCESSFUL\n \t \t WELCOME TO SANJIVANI";
            hide();
            QMessageBox::warning(this, "ADMIN LOGIN SUCCESSFUL ",msg);
            newhome *admin=new newhome;
            admin->show();
        }
        else
        {
            ui->Status->setText("   UNKNOWN USERNAME AND PASSWORD");
        }
    }
}
