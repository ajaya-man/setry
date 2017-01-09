/********************************************************************************
** Form generated from reading UI file 'newhome1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWHOME1_H
#define UI_NEWHOME1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newhome1
{
public:

    void setupUi(QWidget *newhome1)
    {
        if (newhome1->objectName().isEmpty())
            newhome1->setObjectName(QStringLiteral("newhome1"));
        newhome1->resize(400, 300);

        retranslateUi(newhome1);

        QMetaObject::connectSlotsByName(newhome1);
    } // setupUi

    void retranslateUi(QWidget *newhome1)
    {
        newhome1->setWindowTitle(QApplication::translate("newhome1", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class newhome1: public Ui_newhome1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWHOME1_H
