/********************************************************************************
** Form generated from reading UI file 'dab_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAB_MAINWINDOW_H
#define UI_DAB_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DAB_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBoxOperation;
    QPushButton *pushButtonEnvoi;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButtonSolde;
    QRadioButton *radioButtonRetrait;
    QRadioButton *radioButtonDepot;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonNumCompte;
    QLineEdit *lineEditNumCompte;
    QLabel *labelMontant;
    QLineEdit *lineEditMontant;
    QLabel *labelEtat;
    QLabel *labelMessage;
    QLineEdit *lineEditMessageBanque;
    QPushButton *pushButtonConnexion;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *Port;
    QLineEdit *lineEditPort;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelAdresse;
    QLineEdit *lineEditAdresse;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DAB_MainWindow)
    {
        if (DAB_MainWindow->objectName().isEmpty())
            DAB_MainWindow->setObjectName(QString::fromUtf8("DAB_MainWindow"));
        DAB_MainWindow->resize(619, 506);
        centralwidget = new QWidget(DAB_MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBoxOperation = new QGroupBox(centralwidget);
        groupBoxOperation->setObjectName(QString::fromUtf8("groupBoxOperation"));
        groupBoxOperation->setGeometry(QRect(20, 250, 581, 201));
        pushButtonEnvoi = new QPushButton(groupBoxOperation);
        pushButtonEnvoi->setObjectName(QString::fromUtf8("pushButtonEnvoi"));
        pushButtonEnvoi->setGeometry(QRect(370, 150, 80, 24));
        layoutWidget = new QWidget(groupBoxOperation);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(390, 40, 82, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        radioButtonSolde = new QRadioButton(layoutWidget);
        radioButtonSolde->setObjectName(QString::fromUtf8("radioButtonSolde"));
        radioButtonSolde->setEnabled(true);
        radioButtonSolde->setChecked(true);

        verticalLayout->addWidget(radioButtonSolde);

        radioButtonRetrait = new QRadioButton(layoutWidget);
        radioButtonRetrait->setObjectName(QString::fromUtf8("radioButtonRetrait"));

        verticalLayout->addWidget(radioButtonRetrait);

        radioButtonDepot = new QRadioButton(layoutWidget);
        radioButtonDepot->setObjectName(QString::fromUtf8("radioButtonDepot"));

        verticalLayout->addWidget(radioButtonDepot);

        layoutWidget1 = new QWidget(groupBoxOperation);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 50, 311, 56));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonNumCompte = new QPushButton(layoutWidget1);
        pushButtonNumCompte->setObjectName(QString::fromUtf8("pushButtonNumCompte"));

        gridLayout_2->addWidget(pushButtonNumCompte, 0, 0, 1, 1);

        lineEditNumCompte = new QLineEdit(layoutWidget1);
        lineEditNumCompte->setObjectName(QString::fromUtf8("lineEditNumCompte"));

        gridLayout_2->addWidget(lineEditNumCompte, 0, 1, 1, 1);

        labelMontant = new QLabel(layoutWidget1);
        labelMontant->setObjectName(QString::fromUtf8("labelMontant"));

        gridLayout_2->addWidget(labelMontant, 1, 0, 1, 1);

        lineEditMontant = new QLineEdit(layoutWidget1);
        lineEditMontant->setObjectName(QString::fromUtf8("lineEditMontant"));

        gridLayout_2->addWidget(lineEditMontant, 1, 1, 1, 1);

        labelEtat = new QLabel(centralwidget);
        labelEtat->setObjectName(QString::fromUtf8("labelEtat"));
        labelEtat->setGeometry(QRect(290, 20, 121, 16));
        labelMessage = new QLabel(centralwidget);
        labelMessage->setObjectName(QString::fromUtf8("labelMessage"));
        labelMessage->setGeometry(QRect(20, 180, 241, 16));
        lineEditMessageBanque = new QLineEdit(centralwidget);
        lineEditMessageBanque->setObjectName(QString::fromUtf8("lineEditMessageBanque"));
        lineEditMessageBanque->setGeometry(QRect(20, 210, 581, 24));
        pushButtonConnexion = new QPushButton(centralwidget);
        pushButtonConnexion->setObjectName(QString::fromUtf8("pushButtonConnexion"));
        pushButtonConnexion->setGeometry(QRect(110, 110, 101, 24));
        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 30, 233, 56));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);

        Port = new QLabel(layoutWidget2);
        Port->setObjectName(QString::fromUtf8("Port"));

        gridLayout->addWidget(Port, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(layoutWidget2);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        gridLayout->addWidget(lineEditPort, 1, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        labelAdresse = new QLabel(layoutWidget2);
        labelAdresse->setObjectName(QString::fromUtf8("labelAdresse"));

        gridLayout->addWidget(labelAdresse, 0, 0, 1, 2);

        lineEditAdresse = new QLineEdit(layoutWidget2);
        lineEditAdresse->setObjectName(QString::fromUtf8("lineEditAdresse"));

        gridLayout->addWidget(lineEditAdresse, 0, 4, 1, 1);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(290, 40, 311, 151));
        DAB_MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DAB_MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 619, 21));
        DAB_MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DAB_MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        DAB_MainWindow->setStatusBar(statusbar);

        retranslateUi(DAB_MainWindow);

        QMetaObject::connectSlotsByName(DAB_MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DAB_MainWindow)
    {
        DAB_MainWindow->setWindowTitle(QCoreApplication::translate("DAB_MainWindow", "DAB_MainWindow", nullptr));
        groupBoxOperation->setTitle(QCoreApplication::translate("DAB_MainWindow", "Op\303\251rations envoy\303\251es \303\240 la banque", nullptr));
        pushButtonEnvoi->setText(QCoreApplication::translate("DAB_MainWindow", "Envoi", nullptr));
        radioButtonSolde->setText(QCoreApplication::translate("DAB_MainWindow", "Solde", nullptr));
        radioButtonRetrait->setText(QCoreApplication::translate("DAB_MainWindow", "Retrait", nullptr));
        radioButtonDepot->setText(QCoreApplication::translate("DAB_MainWindow", "D\303\251pot", nullptr));
        pushButtonNumCompte->setText(QCoreApplication::translate("DAB_MainWindow", "Num\303\251ro de compte", nullptr));
        labelMontant->setText(QCoreApplication::translate("DAB_MainWindow", "Montant :", nullptr));
        labelEtat->setText(QCoreApplication::translate("DAB_MainWindow", "Etat de la connexion", nullptr));
        labelMessage->setText(QCoreApplication::translate("DAB_MainWindow", "Message de la banque :", nullptr));
        pushButtonConnexion->setText(QCoreApplication::translate("DAB_MainWindow", "Connexion", nullptr));
        Port->setText(QCoreApplication::translate("DAB_MainWindow", "Port :", nullptr));
        labelAdresse->setText(QCoreApplication::translate("DAB_MainWindow", "Adresse :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAB_MainWindow: public Ui_DAB_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAB_MAINWINDOW_H
