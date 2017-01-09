#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileInfo>

#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include<QMessageBox>
#include <QSqlQuery>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    QString Role;
     QString Username, Password;
    ~Widget();

private slots:
    void on_AdminButton_clicked();
    bool checkdb();

    void on_SuperButton_clicked();

    void on_StaffButton_clicked();

private:
    Ui::Widget *ui;
     QSqlDatabase myDB;
};

#endif // WIDGET_H
