/********************************************************************************
** Form generated from reading UI file 'banquemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANQUEMAINWINDOW_H
#define UI_BANQUEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BanqueMainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *BanqueMainWindow)
    {
        if (BanqueMainWindow->objectName().isEmpty())
            BanqueMainWindow->setObjectName(QString::fromUtf8("BanqueMainWindow"));
        BanqueMainWindow->resize(368, 85);
        centralwidget = new QWidget(BanqueMainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        BanqueMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(BanqueMainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 368, 21));
        BanqueMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(BanqueMainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        BanqueMainWindow->setStatusBar(statusbar);

        retranslateUi(BanqueMainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), BanqueMainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(BanqueMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *BanqueMainWindow)
    {
        BanqueMainWindow->setWindowTitle(QCoreApplication::translate("BanqueMainWindow", "BanqueMainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("BanqueMainWindow", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BanqueMainWindow: public Ui_BanqueMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANQUEMAINWINDOW_H
