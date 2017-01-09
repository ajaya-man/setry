/********************************************************************************
** Form generated from reading UI file 'newhome.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWHOME_H
#define UI_NEWHOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_newhome
{
public:

    void setupUi(QWidget *newhome)
    {
        if (newhome->objectName().isEmpty())
            newhome->setObjectName(QStringLiteral("newhome"));
        newhome->resize(400, 300);

        retranslateUi(newhome);

        QMetaObject::connectSlotsByName(newhome);
    } // setupUi

    void retranslateUi(QWidget *newhome)
    {
        newhome->setWindowTitle(QApplication::translate("newhome", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class newhome: public Ui_newhome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWHOME_H
