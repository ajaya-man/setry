/********************************************************************************
** Form generated from reading UI file 'newhome2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWHOME2_H
#define UI_NEWHOME2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newhome2
{
public:

    void setupUi(QWidget *newhome2)
    {
        if (newhome2->objectName().isEmpty())
            newhome2->setObjectName(QStringLiteral("newhome2"));
        newhome2->resize(400, 300);

        retranslateUi(newhome2);

        QMetaObject::connectSlotsByName(newhome2);
    } // setupUi

    void retranslateUi(QWidget *newhome2)
    {
        newhome2->setWindowTitle(QApplication::translate("newhome2", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class newhome2: public Ui_newhome2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWHOME2_H
