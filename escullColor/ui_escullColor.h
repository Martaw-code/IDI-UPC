/********************************************************************************
** Form generated from reading UI file 'escullColor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESCULLCOLOR_H
#define UI_ESCULLCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App2
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_3;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *App2)
    {
        if (App2->objectName().isEmpty())
            App2->setObjectName(QString::fromUtf8("App2"));
        App2->resize(326, 308);
        gridLayout = new QGridLayout(App2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(App2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        label = new QLabel(App2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color:red"));
        label->setScaledContents(false);

        horizontalLayout->addWidget(label);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_2 = new QRadioButton(App2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        label_2 = new QLabel(App2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color:green"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_3 = new QRadioButton(App2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_3->addWidget(radioButton_3);

        label_3 = new QLabel(App2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color:blue"));

        horizontalLayout_3->addWidget(label_3);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer);

        pushButton = new QPushButton(App2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        retranslateUi(App2);
        QObject::connect(pushButton, SIGNAL(clicked()), App2, SLOT(close()));
        QObject::connect(radioButton, SIGNAL(clicked()), label_2, SLOT(hide()));
        QObject::connect(radioButton, SIGNAL(clicked()), label_3, SLOT(hide()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), label_3, SLOT(hide()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), label, SLOT(hide()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), label, SLOT(hide()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), label_2, SLOT(hide()));
        QObject::connect(radioButton, SIGNAL(clicked()), label, SLOT(show()));
        QObject::connect(radioButton_2, SIGNAL(clicked()), label_2, SLOT(show()));
        QObject::connect(radioButton_3, SIGNAL(clicked()), label_3, SLOT(show()));

        QMetaObject::connectSlotsByName(App2);
    } // setupUi

    void retranslateUi(QWidget *App2)
    {
        App2->setWindowTitle(QCoreApplication::translate("App2", "Widget", nullptr));
        radioButton->setText(QCoreApplication::translate("App2", "Vermell", nullptr));
        label->setText(QCoreApplication::translate("App2", "VERMELL", nullptr));
        radioButton_2->setText(QCoreApplication::translate("App2", "Verd", nullptr));
        label_2->setText(QCoreApplication::translate("App2", "VERD", nullptr));
        radioButton_3->setText(QCoreApplication::translate("App2", "Blau", nullptr));
        label_3->setText(QCoreApplication::translate("App2", "BLAU", nullptr));
        pushButton->setText(QCoreApplication::translate("App2", "&Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App2: public Ui_App2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESCULLCOLOR_H
