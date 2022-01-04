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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *groupBoxConnexion;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditNomBdd;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditMDP;
    QPushButton *pushButtonConnexionBDD;
    QGroupBox *groupBoxAffichageInfo;
    QPushButton *pushButtonAfficherInfo;
    QTableWidget *tableWidgetInfos;
    QPushButton *pushButtonQuitter;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        groupBoxConnexion = new QGroupBox(Widget);
        groupBoxConnexion->setObjectName(QString::fromUtf8("groupBoxConnexion"));
        groupBoxConnexion->setGeometry(QRect(30, 20, 711, 291));
        label = new QLabel(groupBoxConnexion);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 62, 16));
        label_2 = new QLabel(groupBoxConnexion);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 90, 86, 16));
        label_3 = new QLabel(groupBoxConnexion);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 130, 33, 16));
        label_4 = new QLabel(groupBoxConnexion);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 170, 91, 16));
        lineEditIP = new QLineEdit(groupBoxConnexion);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setGeometry(QRect(190, 50, 113, 24));
        lineEditNomBdd = new QLineEdit(groupBoxConnexion);
        lineEditNomBdd->setObjectName(QString::fromUtf8("lineEditNomBdd"));
        lineEditNomBdd->setGeometry(QRect(190, 90, 113, 24));
        lineEditLogin = new QLineEdit(groupBoxConnexion);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setGeometry(QRect(190, 130, 113, 24));
        lineEditMDP = new QLineEdit(groupBoxConnexion);
        lineEditMDP->setObjectName(QString::fromUtf8("lineEditMDP"));
        lineEditMDP->setGeometry(QRect(190, 170, 113, 24));
        pushButtonConnexionBDD = new QPushButton(groupBoxConnexion);
        pushButtonConnexionBDD->setObjectName(QString::fromUtf8("pushButtonConnexionBDD"));
        pushButtonConnexionBDD->setGeometry(QRect(440, 50, 190, 24));
        groupBoxAffichageInfo = new QGroupBox(Widget);
        groupBoxAffichageInfo->setObjectName(QString::fromUtf8("groupBoxAffichageInfo"));
        groupBoxAffichageInfo->setEnabled(false);
        groupBoxAffichageInfo->setGeometry(QRect(30, 310, 711, 251));
        pushButtonAfficherInfo = new QPushButton(groupBoxAffichageInfo);
        pushButtonAfficherInfo->setObjectName(QString::fromUtf8("pushButtonAfficherInfo"));
        pushButtonAfficherInfo->setGeometry(QRect(160, 30, 274, 24));
        tableWidgetInfos = new QTableWidget(groupBoxAffichageInfo);
        if (tableWidgetInfos->columnCount() < 4)
            tableWidgetInfos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetInfos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetInfos->setObjectName(QString::fromUtf8("tableWidgetInfos"));
        tableWidgetInfos->setGeometry(QRect(40, 80, 641, 131));
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(300, 570, 80, 24));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBoxConnexion->setTitle(QCoreApplication::translate("Widget", "Connexion", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Adresse IP", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Nom de la bdd", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "Mot de passe", nullptr));
        lineEditIP->setText(QCoreApplication::translate("Widget", "172.18.58.14", nullptr));
        lineEditNomBdd->setText(QCoreApplication::translate("Widget", "banque", nullptr));
        lineEditLogin->setText(QCoreApplication::translate("Widget", "snir", nullptr));
        lineEditMDP->setText(QCoreApplication::translate("Widget", "snir", nullptr));
        pushButtonConnexionBDD->setText(QCoreApplication::translate("Widget", "Connexion \303\240 la base de donn\303\251e", nullptr));
        groupBoxAffichageInfo->setTitle(QCoreApplication::translate("Widget", "Affichage infos comptes", nullptr));
        pushButtonAfficherInfo->setText(QCoreApplication::translate("Widget", "Afficher les informations de tout les comptes", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetInfos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Widget", "Nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetInfos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Widget", "Pr\303\251nom", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetInfos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Widget", "Num\303\251ro de compte", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetInfos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Widget", "Solde", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
