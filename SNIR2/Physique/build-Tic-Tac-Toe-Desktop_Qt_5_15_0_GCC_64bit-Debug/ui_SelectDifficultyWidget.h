/********************************************************************************
** Form generated from reading UI file 'SelectDifficultyWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTDIFFICULTYWIDGET_H
#define UI_SELECTDIFFICULTYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectDifficultyWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *labelTitle;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButtonEasy;
    QRadioButton *radioButtonMedium;
    QRadioButton *radioButtonHard;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonOk;
    QPushButton *pushButtonCancel;

    void setupUi(QWidget *SelectDifficultyWidget)
    {
        if (SelectDifficultyWidget->objectName().isEmpty())
            SelectDifficultyWidget->setObjectName(QString::fromUtf8("SelectDifficultyWidget"));
        SelectDifficultyWidget->resize(350, 350);
        verticalLayout_2 = new QVBoxLayout(SelectDifficultyWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelTitle = new QLabel(SelectDifficultyWidget);
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

        verticalLayout->addWidget(labelTitle);

        label = new QLabel(SelectDifficultyWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButtonEasy = new QRadioButton(SelectDifficultyWidget);
        radioButtonEasy->setObjectName(QString::fromUtf8("radioButtonEasy"));

        horizontalLayout->addWidget(radioButtonEasy);

        radioButtonMedium = new QRadioButton(SelectDifficultyWidget);
        radioButtonMedium->setObjectName(QString::fromUtf8("radioButtonMedium"));
        radioButtonMedium->setEnabled(true);
        radioButtonMedium->setChecked(true);

        horizontalLayout->addWidget(radioButtonMedium);

        radioButtonHard = new QRadioButton(SelectDifficultyWidget);
        radioButtonHard->setObjectName(QString::fromUtf8("radioButtonHard"));

        horizontalLayout->addWidget(radioButtonHard);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonOk = new QPushButton(SelectDifficultyWidget);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));

        horizontalLayout_2->addWidget(pushButtonOk);

        pushButtonCancel = new QPushButton(SelectDifficultyWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout_2->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(SelectDifficultyWidget);

        QMetaObject::connectSlotsByName(SelectDifficultyWidget);
    } // setupUi

    void retranslateUi(QWidget *SelectDifficultyWidget)
    {
        SelectDifficultyWidget->setWindowTitle(QCoreApplication::translate("SelectDifficultyWidget", "Form", nullptr));
        labelTitle->setText(QCoreApplication::translate("SelectDifficultyWidget", "Single Player", nullptr));
        label->setText(QCoreApplication::translate("SelectDifficultyWidget", "Select a difficulty", nullptr));
        radioButtonEasy->setText(QCoreApplication::translate("SelectDifficultyWidget", "Easy", nullptr));
        radioButtonMedium->setText(QCoreApplication::translate("SelectDifficultyWidget", "Medium", nullptr));
        radioButtonHard->setText(QCoreApplication::translate("SelectDifficultyWidget", "Hard", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("SelectDifficultyWidget", "Ok", nullptr));
        pushButtonCancel->setText(QCoreApplication::translate("SelectDifficultyWidget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectDifficultyWidget: public Ui_SelectDifficultyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTDIFFICULTYWIDGET_H
