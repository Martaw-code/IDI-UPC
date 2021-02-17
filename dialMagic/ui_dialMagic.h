/********************************************************************************
** Form generated from reading UI file 'dialMagic.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALMAGIC_H
#define UI_DIALMAGIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App5
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QDial *dial;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *App5)
    {
        if (App5->objectName().isEmpty())
            App5->setObjectName(QString::fromUtf8("App5"));
        App5->resize(308, 295);
        verticalLayout = new QVBoxLayout(App5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        dial = new QDial(App5);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(1);
        dial->setMaximum(50);

        formLayout->setWidget(0, QFormLayout::LabelRole, dial);

        label = new QLabel(App5);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::FieldRole, label);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(App5);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(App5);
        QObject::connect(pushButton, SIGNAL(clicked()), App5, SLOT(close()));
        QObject::connect(dial, SIGNAL(valueChanged(int)), label, SLOT(setNum(int)));
        QObject::connect(dial, SIGNAL(sliderPressed()), label, SLOT(show()));
        QObject::connect(dial, SIGNAL(sliderReleased()), label, SLOT(hide()));

        QMetaObject::connectSlotsByName(App5);
    } // setupUi

    void retranslateUi(QWidget *App5)
    {
        App5->setWindowTitle(QCoreApplication::translate("App5", "MainWindow", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("App5", "&Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App5: public Ui_App5 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALMAGIC_H
