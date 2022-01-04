/********************************************************************************
** Form generated from reading UI file 'MainWindowManager.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWMANAGER_H
#define UI_MAINWINDOWMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowManager
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *button_new_main_window;

    void setupUi(QWidget *MainWindowManager)
    {
        if (MainWindowManager->objectName().isEmpty())
            MainWindowManager->setObjectName(QString::fromUtf8("MainWindowManager"));
        MainWindowManager->resize(133, 68);
        verticalLayout = new QVBoxLayout(MainWindowManager);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MainWindowManager);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        button_new_main_window = new QPushButton(MainWindowManager);
        button_new_main_window->setObjectName(QString::fromUtf8("button_new_main_window"));

        verticalLayout->addWidget(button_new_main_window);


        retranslateUi(MainWindowManager);

        QMetaObject::connectSlotsByName(MainWindowManager);
    } // setupUi

    void retranslateUi(QWidget *MainWindowManager)
    {
        MainWindowManager->setWindowTitle(QCoreApplication::translate("MainWindowManager", "Form", nullptr));
        label->setText(QCoreApplication::translate("MainWindowManager", "Manager", nullptr));
        button_new_main_window->setText(QCoreApplication::translate("MainWindowManager", "New MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowManager: public Ui_MainWindowManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWMANAGER_H
