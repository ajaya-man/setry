/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *Status;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *SuperButton;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *Pass;
    QLineEdit *User;
    QPushButton *StaffButton;
    QPushButton *AdminButton;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(438, 420);
        Widget->setStyleSheet(QLatin1String("\n"
"background-color: rgb(209, 209, 209);"));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 25));
        label->setMaximumSize(QSize(16777215, 74));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(8);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("\n"
"background-color: rgb(167, 167, 167);\n"
""));
        label->setFrameShape(QFrame::StyledPanel);
        label->setFrameShadow(QFrame::Raised);
        label->setScaledContents(true);
        label->setWordWrap(true);
        label->setMargin(9);

        verticalLayout->addWidget(label);

        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        frame = new QFrame(widget);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMaximumSize(QSize(16776992, 16777215));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(182, 181, 184);"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        Status = new QLabel(frame);
        Status->setObjectName(QStringLiteral("Status"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Status->sizePolicy().hasHeightForWidth());
        Status->setSizePolicy(sizePolicy2);
        Status->setFrameShadow(QFrame::Raised);
        Status->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Status, 3, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 64, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        SuperButton = new QPushButton(frame);
        SuperButton->setObjectName(QStringLiteral("SuperButton"));
        sizePolicy3.setHeightForWidth(SuperButton->sizePolicy().hasHeightForWidth());
        SuperButton->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setBold(true);
        font2.setWeight(75);
        SuperButton->setFont(font2);

        gridLayout->addWidget(SuperButton, 5, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 57, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        Pass = new QLineEdit(frame);
        Pass->setObjectName(QStringLiteral("Pass"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(Pass->sizePolicy().hasHeightForWidth());
        Pass->setSizePolicy(sizePolicy4);
        QFont font3;
        font3.setFamily(QStringLiteral("Comic Sans MS"));
        font3.setPointSize(12);
        Pass->setFont(font3);
        Pass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        Pass->setEchoMode(QLineEdit::Password);
        Pass->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Pass, 2, 2, 1, 1);

        User = new QLineEdit(frame);
        User->setObjectName(QStringLiteral("User"));
        sizePolicy4.setHeightForWidth(User->sizePolicy().hasHeightForWidth());
        User->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setFamily(QStringLiteral("Comic Sans MS"));
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setWeight(75);
        User->setFont(font4);
        User->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        User->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(User, 1, 2, 1, 1);

        StaffButton = new QPushButton(frame);
        StaffButton->setObjectName(QStringLiteral("StaffButton"));
        sizePolicy3.setHeightForWidth(StaffButton->sizePolicy().hasHeightForWidth());
        StaffButton->setSizePolicy(sizePolicy3);
        StaffButton->setFont(font);

        gridLayout->addWidget(StaffButton, 6, 0, 1, 3);

        AdminButton = new QPushButton(frame);
        AdminButton->setObjectName(QStringLiteral("AdminButton"));
        sizePolicy3.setHeightForWidth(AdminButton->sizePolicy().hasHeightForWidth());
        AdminButton->setSizePolicy(sizePolicy3);
        AdminButton->setFont(font2);

        gridLayout->addWidget(AdminButton, 4, 0, 1, 3);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        sizePolicy2.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy2);
        frame_2->setMaximumSize(QSize(14444444, 16777215));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/new/prefix1/2017-09-1--01-10-09.png);"));

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);


        horizontalLayout->addWidget(frame_2);


        verticalLayout->addWidget(widget);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:28pt; color:#ffffff;\">SANJIVANI</span></p><p align=\"center\"><br/></p></body></html>", 0));
        Status->setText(QApplication::translate("Widget", "STATUS::", 0));
        label_3->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:600;\">USERNAME</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Widget", "<html><head/><body><p><span style=\" font-weight:600;\">PASSWORD</span></p></body></html>", 0));
        SuperButton->setText(QApplication::translate("Widget", "LOGIN AS SUPERVISOR", 0));
        StaffButton->setText(QApplication::translate("Widget", "LOGIN AS STAFF", 0));
        AdminButton->setText(QApplication::translate("Widget", "LOGIN AS ADMIN", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
