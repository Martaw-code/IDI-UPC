/********************************************************************************
** Form generated from reading UI file 'conversor.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERSOR_H
#define UI_CONVERSOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App6
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpinBox *spinBox;
    QDial *dial;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *App6)
    {
        if (App6->objectName().isEmpty())
            App6->setObjectName(QString::fromUtf8("App6"));
        App6->resize(461, 417);
        verticalLayout = new QVBoxLayout(App6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label = new QLabel(App6);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        spinBox = new QSpinBox(App6);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(1);
        spinBox->setMaximum(200);

        horizontalLayout_5->addWidget(spinBox);

        dial = new QDial(App6);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMinimum(1);
        dial->setMaximum(200);

        horizontalLayout_5->addWidget(dial);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(App6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: green"));

        horizontalLayout->addWidget(label_2);

        lcdNumber = new QLCDNumber(App6);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setStyleSheet(QString::fromUtf8("background-color:green"));
        lcdNumber->setSmallDecimalPoint(false);
        lcdNumber->setDigitCount(10);
        lcdNumber->setMode(QLCDNumber::Bin);
        lcdNumber->setProperty("value", QVariant(0.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(0));

        horizontalLayout->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(App6);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color:blue"));

        horizontalLayout_2->addWidget(label_3);

        lcdNumber_2 = new QLCDNumber(App6);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setStyleSheet(QString::fromUtf8("background-color:blue"));
        lcdNumber_2->setDigitCount(10);
        lcdNumber_2->setMode(QLCDNumber::Oct);

        horizontalLayout_2->addWidget(lcdNumber_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(App6);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color:red"));

        horizontalLayout_3->addWidget(label_4);

        lcdNumber_3 = new QLCDNumber(App6);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setStyleSheet(QString::fromUtf8("background-color:red"));
        lcdNumber_3->setDigitCount(10);
        lcdNumber_3->setMode(QLCDNumber::Hex);

        horizontalLayout_3->addWidget(lcdNumber_3);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton = new QPushButton(App6);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(App6);
        QObject::connect(pushButton, SIGNAL(clicked()), App6, SLOT(close()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(App6);
    } // setupUi

    void retranslateUi(QWidget *App6)
    {
        App6->setWindowTitle(QCoreApplication::translate("App6", "Conversor", nullptr));
        label->setText(QCoreApplication::translate("App6", "Escriu un nombre natural: ", nullptr));
        label_2->setText(QCoreApplication::translate("App6", "Binari", nullptr));
        label_3->setText(QCoreApplication::translate("App6", "Octal", nullptr));
        label_4->setText(QCoreApplication::translate("App6", "Hexadecimal", nullptr));
        pushButton->setText(QCoreApplication::translate("App6", "&Sortir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App6: public Ui_App6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERSOR_H
