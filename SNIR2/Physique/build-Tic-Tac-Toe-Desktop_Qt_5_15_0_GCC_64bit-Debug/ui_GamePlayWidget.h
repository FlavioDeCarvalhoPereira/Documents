/********************************************************************************
** Form generated from reading UI file 'GamePlayWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPLAYWIDGET_H
#define UI_GAMEPLAYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/BoardWidget.h"

QT_BEGIN_NAMESPACE

class Ui_GamePlayWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelSubtitle;
    QPushButton *buttonLeave;
    BoardWidget *boardWidget;

    void setupUi(QWidget *GamePlayWidget)
    {
        if (GamePlayWidget->objectName().isEmpty())
            GamePlayWidget->setObjectName(QString::fromUtf8("GamePlayWidget"));
        GamePlayWidget->resize(350, 350);
        verticalLayout_2 = new QVBoxLayout(GamePlayWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        labelTitle = new QLabel(GamePlayWidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        labelTitle->setFont(font);
        labelTitle->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(labelTitle);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        labelSubtitle = new QLabel(GamePlayWidget);
        labelSubtitle->setObjectName(QString::fromUtf8("labelSubtitle"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelSubtitle->sizePolicy().hasHeightForWidth());
        labelSubtitle->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(10);
        labelSubtitle->setFont(font1);
        labelSubtitle->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelSubtitle);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout_3);

        buttonLeave = new QPushButton(GamePlayWidget);
        buttonLeave->setObjectName(QString::fromUtf8("buttonLeave"));
        sizePolicy1.setHeightForWidth(buttonLeave->sizePolicy().hasHeightForWidth());
        buttonLeave->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(buttonLeave);


        verticalLayout->addLayout(horizontalLayout);

        boardWidget = new BoardWidget(GamePlayWidget);
        boardWidget->setObjectName(QString::fromUtf8("boardWidget"));
        sizePolicy.setHeightForWidth(boardWidget->sizePolicy().hasHeightForWidth());
        boardWidget->setSizePolicy(sizePolicy);
        boardWidget->setMinimumSize(QSize(200, 250));

        verticalLayout->addWidget(boardWidget);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(GamePlayWidget);

        QMetaObject::connectSlotsByName(GamePlayWidget);
    } // setupUi

    void retranslateUi(QWidget *GamePlayWidget)
    {
        GamePlayWidget->setWindowTitle(QCoreApplication::translate("GamePlayWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("GamePlayWidget", "Some Message To User", nullptr));
        labelSubtitle->setText(QCoreApplication::translate("GamePlayWidget", "Subtitle", nullptr));
        buttonLeave->setText(QCoreApplication::translate("GamePlayWidget", "Leave Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePlayWidget: public Ui_GamePlayWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAYWIDGET_H
