#include "ihm.h"
#include "ui_imc.h"

IHM::IHM(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Imc)
{
    ui->setupUi(this);

    ui->tabWidget->setCurrentIndex(0);
    ui->tabWidget->setTabEnabled(1,false);
}

IHM::~IHM()
{
    delete ui;
}

void IHM::afficherInfos()
{
    double imcs[NBIMC] = {16.5, 18.5, 25, 30, 35, 40};
    QString corpulences[NBCORPULENCE] = {"Famine", "Maigreur", "Normale", "Surpoids", "Obésité modérée", "Obésité sévère", "Obésité morbide"};
    double imc=0;
    // initialisation de poids, taille, âge, nom et prenom
    nom = ui->lineEditNom->text();
    prenom = ui->lineEditPrenom->text();
    age = ui->spinBoxAge->value();
    poids = ui->doubleSpinBoxPoids->value();
    taille = ui->doubleSpinBoxTaille->value();
    // affichage message de bienvenue
    ui->textEdit->append("Bonjour");
    // calcul de l'imc
    imc=poids/(taille*taille);
    // affichage de l'imc
    ui->textEdit->append("Votre indice de masse corporel est de : <b>"+QString::number(imc,'f',1) + "<b>");
    int indiceCorpulence = 0;
    for (int i = 0; i < NBIMC - 1; i++) {
        if (imc > imcs[i] && imc <= imcs[i + 1]) {
            indiceCorpulence = i + 1;
        }
    }
    // cas extreme
    if (imc < 16.5) {
        indiceCorpulence = 0;
    }
    if (imc > 40) {
       indiceCorpulence = NBCORPULENCE - 1;
    }
    // affichage de la corpulence: corpulences[indiceCorpulence]
    ui->textEdit->append("Votre corpulence est qualifiée de <b>" + corpulences[indiceCorpulence] + "<b>");
}
void IHM::on_pushButton_clicked()
{
    ui->tabWidget->setTabEnabled(1,true);
    afficherInfos();
    ui->tabWidget->setCurrentIndex(1);

}


void IHM::on_pushButton_2_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = 45.5 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = 50.0 + 2.3 * (taille / 0.0254 - 60.0);
    }
    if (poidsIdeal > 0) {
        ui->textEdit->append("");
        ui->textEdit->append("Votre poids ideal avec la formule de Devine : <b>" + QString::number(poidsIdeal, 'f',1) + " kg<b>");
        ui->textEdit->append("");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEdit->append("Vous devez perdre <b>"+QString::number(ecart, 'f',1)+" kg<b>");
        }
        else {
          ui->textEdit->append("Vous devez prendre <b>"+QString::number(-ecart, 'f',1)+" kg<b>");
        }
    }
}


void IHM::on_pushButtonLorentz_clicked()
{
    double poidsIdeal = 0;
    if (ui->radioButtonFemme->isChecked()) {
        poidsIdeal = taille * 100 - 100 - ((taille*100-150)/2.5);
    }
    if (ui->radioButtonHomme->isChecked()) {
        poidsIdeal = taille * 100 - 100 - ((taille*100-150)/4);
    }
    if (poidsIdeal > 0) {
        ui->textEdit->append("");
        ui->textEdit->append("Votre poids ideal avec la formule de Lorentz : <b>" + QString::number(poidsIdeal, 'f',1) + " kg<b>");
        ui->textEdit->append("");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEdit->append("Vous devez perdre <b>"+QString::number(ecart, 'f',1)+" kg<b>");
        }
        else {
          ui->textEdit->append("Vous devez prendre <b>"+QString::number(-ecart, 'f',1)+" kg<b>");
        }
    }
}


void IHM::on_pushButtonLorentzAge_clicked()
{
    double poidsIdeal = 0;

    poidsIdeal = 50+(taille*100-150)/4+(age-20)/4;

    if (poidsIdeal > 0) {
        ui->textEdit->append("");
        ui->textEdit->append("Votre poids ideal avec la formule de Lorentz avec l'age : <b>" + QString::number(poidsIdeal, 'f',1) + " kg<b>");
        ui->textEdit->append("");
        double ecart = poids-poidsIdeal;
        if (ecart >= 0) {
          ui->textEdit->append("Vous devez perdre <b>"+QString::number(ecart, 'f',1)+" kg<b>");
        }
        else {
          ui->textEdit->append("Vous devez prendre <b>"+QString::number(-ecart, 'f',1)+" kg<b>");
        }
    }
}

