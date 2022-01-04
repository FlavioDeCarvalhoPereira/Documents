#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}


Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonConnexionBDD_clicked()
{
    QSqlDatabase bdd;

    bdd = QSqlDatabase::addDatabase("QMYSQL");
    bdd.setHostName(ui->lineEditIP->text());
    bdd.setDatabaseName(ui->lineEditNomBdd->text());
    bdd.setUserName(ui->lineEditLogin->text());
    bdd.setPassword(ui->lineEditMDP->text());

    if(!bdd.open()) {
        qDebug() << "pb acces bdd "<<bdd.lastError();
    } else {
        qDebug() << "acces bdd ok";
        ui->groupBoxConnexion->setEnabled(false);
        ui->groupBoxAffichageInfo->setEnabled(true);
    }
}

void Widget::on_pushButtonAfficherInfo_clicked()
{
    int ligne=0;    // numero de la ligne
    QSqlQuery requete("select nom,prenom,solde,idCompte from comptes;");
    while (requete.next()){
        //ui->textEditAffichageInfo->append(requete.value("nom").toString());
        // ajouter une ligne au tableau
        ui->tableWidgetInfos->insertRow(ui->tableWidgetInfos->rowCount());

        int col=0;      // numero de la colonne
        // ajouter un nom
        QTableWidgetItem *nomItem = new QTableWidgetItem(requete.value("nom").toString());
        ui->tableWidgetInfos->setItem(ligne,col,nomItem);
        col++;
        // ajouter un prenom
        QTableWidgetItem *prenomItem = new QTableWidgetItem(requete.value("prenom").toString());
        ui->tableWidgetInfos->setItem(ligne,col,prenomItem);
        col++;
        // ajouter le numero de compte
        QTableWidgetItem *idCompteItem = new QTableWidgetItem(QString::number(requete.value("idCompte").toInt()));
        ui->tableWidgetInfos->setItem(ligne,col,idCompteItem);
        col++;
        // ajouter le solde
        QTableWidgetItem *soldeItem = new QTableWidgetItem(QString::number(requete.value("solde").toDouble()));
        ui->tableWidgetInfos->setItem(ligne,col,soldeItem);
        ligne++;
    }

}
