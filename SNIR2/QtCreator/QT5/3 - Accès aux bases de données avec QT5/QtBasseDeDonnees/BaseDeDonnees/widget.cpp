#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent): QWidget(parent), ui(new Ui::Widget){
    ui->setupUi(this);
    bd=QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.7");
    bd.setDatabaseName("france2018");
    bd.setUserName("snir");
    bd.setPassword("snir");
    if(!bd.open()){
        qDebug() << "pb access bd " << bd.lastError();
    }else{
        qDebug() << "access bd ok" ;
        QSqlQuery requete("select code, name from regions order by name;");
        if(!requete.exec()){
            qDebug()<<"pb requete" << requete.lastError();
        }
        QString nom;
        QString id;

        while(requete.next()){
            nom=requete.value("name").toString();
            id=requete.value("code").toString();
            ui->comboBoxRegions->addItem(nom, id);
            QSqlQuery requete("select name from departments order by name;");
            if(!requete.exec()){
                qDebug()<<"pb requete" << requete.lastError();
            }
            QString nomDepartement ;
            while (requete.next()) {
                nomDepartement= requete.value("name").toString();
                qDebug() << nomDepartement;
                QSqlQuery requete("select name from cities order by name;");
                if(!requete.exec()){
                    qDebug()<<"pb requete" << requete.lastError();
                }
                QString nomVille ;
                while (requete.next()) {
                    nomVille= requete.value("name").toString();
                    qDebug() << nomVille;
                }
            }

        }

    }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonNomDep_clicked(){
    QString numDep ;
    QString nomDep ;
    QSqlQuery requetePrepare;
    numDep = ui->lineEditNumDep->text();
    requetePrepare.prepare("select name from departments where code = :iddep");

    requetePrepare.bindValue(":iddep",numDep);
    if(!requetePrepare.exec()){
        qDebug()<<"pb requetePrepare" << requetePrepare.lastError();
    }
    while(requetePrepare.next()){
        nomDep=requetePrepare.value("name").toString();
         ui->label->setText(nomDep);
    }
}

void Widget::on_comboBoxRegions_currentIndexChanged(int index){
    // recupere l'id de la region
    QString idRegion = ui->comboBoxRegions->itemData(index).toString();
    // vider la liste des départements
    ui->comboBoxDepartements->clear();
    ui->comboBoxVilles->clear();
    ui->comboBoxDepartements->addItem("Choisissez un département");


}

void Widget::on_comboBoxDepartements_currentIndexChanged(int index){
    // recupere l'id du departement
    QString idDep = ui->comboBoxDepartements->itemData(index).toString();
    // vider la liste des villes
    ui->comboBoxVilles->clear();
    ui->comboBoxVilles->addItem("Choisissez une ville");
}
