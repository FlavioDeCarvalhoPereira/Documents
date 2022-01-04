/********************************************************************************
** Form generated from reading UI file 'equilibreuse.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUILIBREUSE_H
#define UI_EQUILIBREUSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Equilibreuse
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QDial *dial;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Equilibreuse)
    {
        if (Equilibreuse->objectName().isEmpty())
            Equilibreuse->setObjectName(QString::fromUtf8("Equilibreuse"));
        Equilibreuse->resize(239, 325);
        centralwidget = new QWidget(Equilibreuse);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        dial = new QDial(centralwidget);
        dial->setObjectName(QString::fromUtf8("dial"));

        horizontalLayout_2->addWidget(dial);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout_2->addWidget(lcdNumber);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        Equilibreuse->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Equilibreuse);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 239, 21));
        Equilibreuse->setMenuBar(menubar);
        statusbar = new QStatusBar(Equilibreuse);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Equilibreuse->setStatusBar(statusbar);

        retranslateUi(Equilibreuse);

        QMetaObject::connectSlotsByName(Equilibreuse);
    } // setupUi

    void retranslateUi(QMainWindow *Equilibreuse)
    {
        Equilibreuse->setWindowTitle(QCoreApplication::translate("Equilibreuse", "Equilibreuse", nullptr));
        pushButton->setText(QCoreApplication::translate("Equilibreuse", "Lancer Moteur", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Equilibreuse", "Arr\303\252ter Moteur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Equilibreuse: public Ui_Equilibreuse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUILIBREUSE_H
