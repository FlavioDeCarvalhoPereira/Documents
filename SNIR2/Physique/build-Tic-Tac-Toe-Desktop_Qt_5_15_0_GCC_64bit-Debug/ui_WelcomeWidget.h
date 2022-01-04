/********************************************************************************
** Form generated from reading UI file 'WelcomeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLabel *labelSubtitle;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *buttonSinglePlayer;
    QPushButton *buttonMultiPlayer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *WelcomeWidget)
    {
        if (WelcomeWidget->objectName().isEmpty())
            WelcomeWidget->setObjectName(QString::fromUtf8("WelcomeWidget"));
        WelcomeWidget->resize(350, 350);
        verticalLayout_2 = new QVBoxLayout(WelcomeWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTitle = new QLabel(WelcomeWidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QFont font;
        font.setPointSize(14);
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelTitle);

        labelSubtitle = new QLabel(WelcomeWidget);
        labelSubtitle->setObjectName(QString::fromUtf8("labelSubtitle"));
        QFont font1;
        font1.setPointSize(10);
        labelSubtitle->setFont(font1);
        labelSubtitle->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labelSubtitle);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonSinglePlayer = new QPushButton(WelcomeWidget);
        buttonSinglePlayer->setObjectName(QString::fromUtf8("buttonSinglePlayer"));

        horizontalLayout->addWidget(buttonSinglePlayer);

        buttonMultiPlayer = new QPushButton(WelcomeWidget);
        buttonMultiPlayer->setObjectName(QString::fromUtf8("buttonMultiPlayer"));

        horizontalLayout->addWidget(buttonMultiPlayer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(WelcomeWidget);

        QMetaObject::connectSlotsByName(WelcomeWidget);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWidget)
    {
        WelcomeWidget->setWindowTitle(QCoreApplication::translate("WelcomeWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("WelcomeWidget", "Tic-Tac-Toe", nullptr));
        labelSubtitle->setText(QCoreApplication::translate("WelcomeWidget", "Select a mode", nullptr));
        buttonSinglePlayer->setText(QCoreApplication::translate("WelcomeWidget", "Single Player", nullptr));
        buttonMultiPlayer->setText(QCoreApplication::translate("WelcomeWidget", "Multi-Player", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWidget: public Ui_WelcomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
