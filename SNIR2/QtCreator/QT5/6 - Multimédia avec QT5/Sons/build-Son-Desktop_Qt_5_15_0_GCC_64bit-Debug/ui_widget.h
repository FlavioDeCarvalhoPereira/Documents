/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonChooseFile;
    QPushButton *pushButtonPLayExternalSound;
    QProgressBar *progressBar;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        pushButtonChooseFile = new QPushButton(Widget);
        pushButtonChooseFile->setObjectName(QString::fromUtf8("pushButtonChooseFile"));
        pushButtonChooseFile->setGeometry(QRect(10, 20, 171, 31));
        pushButtonPLayExternalSound = new QPushButton(Widget);
        pushButtonPLayExternalSound->setObjectName(QString::fromUtf8("pushButtonPLayExternalSound"));
        pushButtonPLayExternalSound->setGeometry(QRect(180, 20, 171, 31));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(10, 60, 511, 23));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 20, 171, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonChooseFile->setText(QCoreApplication::translate("Widget", "Choisir la Musique", nullptr));
        pushButtonPLayExternalSound->setText(QCoreApplication::translate("Widget", "Jouer la Musique", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
