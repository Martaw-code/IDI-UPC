/********************************************************************************
** Form generated from reading UI file 'rellotgeDial.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELLOTGEDIAL_H
#define UI_RELLOTGEDIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App1
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QDial *dial;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber_2;
    QDial *dial_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *App1)
    {
        if (App1->objectName().isEmpty())
            App1->setObjectName(QString::fromUtf8("App1"));
        App1->resize(327, 262);
        verticalLayout_4 = new QVBoxLayout(App1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(App1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        lcdNumber = new QLCDNumber(App1);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        verticalLayout_2->addWidget(lcdNumber);

        dial = new QDial(App1);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(23);

        verticalLayout_2->addWidget(dial);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(App1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        lcdNumber_2 = new QLCDNumber(App1);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        verticalLayout->addWidget(lcdNumber_2);

        dial_2 = new QDial(App1);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setMaximum(59);

        verticalLayout->addWidget(dial_2);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout->addItem(verticalSpacer);

        pushButton = new QPushButton(App1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(App1);
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(dial_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), App1, SLOT(close()));

        QMetaObject::connectSlotsByName(App1);
    } // setupUi

    void retranslateUi(QWidget *App1)
    {
        App1->setWindowTitle(QCoreApplication::translate("App1", "Principal", nullptr));
        label->setText(QCoreApplication::translate("App1", "Hours", nullptr));
        label_2->setText(QCoreApplication::translate("App1", "Minutes", nullptr));
        pushButton->setText(QCoreApplication::translate("App1", "&Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App1: public Ui_App1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELLOTGEDIAL_H
