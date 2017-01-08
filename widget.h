#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileInfo>

#include <QtSql/QSqlDriver>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include<QMessageBox>
#include <QSqlQuery>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_AdminButton_clicked();

private:
    Ui::Widget *ui;
     QSqlDatabase myDB;
};

#endif // WIDGET_H
