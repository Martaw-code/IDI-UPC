/********************************************************************************
** Form generated from reading UI file 'ecoText.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECOTEXT_H
#define UI_ECOTEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_App4
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;

    void setupUi(QWidget *App4)
    {
        if (App4->objectName().isEmpty())
            App4->setObjectName(QString::fromUtf8("App4"));
        App4->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(App4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(App4);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(20);
        font.setItalic(true);
        label->setFont(font);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(App4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setSizeIncrement(QSize(50, 50));
        QFont font1;
        font1.setPointSize(20);
        lineEdit->setFont(font1);

        verticalLayout->addWidget(lineEdit);


        verticalLayout_2->addLayout(verticalLayout);

        label_2 = new QLabel(App4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setPointSize(30);
        font2.setItalic(true);
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);

        textBrowser = new QTextBrowser(App4);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(App4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(App4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(App4);
        QObject::connect(pushButton_2, SIGNAL(clicked()), App4, SLOT(close()));
        QObject::connect(pushButton, SIGNAL(clicked()), lineEdit, SLOT(clear()));
        QObject::connect(lineEdit, SIGNAL(textEdited(QString)), textBrowser, SLOT(setText(QString)));
        QObject::connect(pushButton, SIGNAL(clicked()), textBrowser, SLOT(clear()));

        QMetaObject::connectSlotsByName(App4);
    } // setupUi

    void retranslateUi(QWidget *App4)
    {
        App4->setWindowTitle(QCoreApplication::translate("App4", "Form", nullptr));
        label->setText(QCoreApplication::translate("App4", "Edita un text:", nullptr));
        label_2->setText(QCoreApplication::translate("App4", "Text Replicat", nullptr));
        pushButton->setText(QCoreApplication::translate("App4", "&Neteja", nullptr));
        pushButton_2->setText(QCoreApplication::translate("App4", "&Sortir", nullptr));
    } // retranslateUi

};

namespace Ui {
    class App4: public Ui_App4 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECOTEXT_H
