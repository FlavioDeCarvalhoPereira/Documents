#include "calculatrice.h"
#include "ui_widget.h"

Calculatrice::Calculatrice(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Calculatrice::~Calculatrice()
{
    delete ui;
}


void Calculatrice::on_pushButton_div_clicked()
{
    ui->lineEdit_Resultat->insert("/");
}

void Calculatrice::on_pushButton_egal_clicked()
{
    QScriptEngine script;
    ui->lineEdit_Resultat->setText(script.evaluate(ui->lineEdit_Resultat->text()).toString());

}


void Calculatrice::on_pushButton_c_clicked()
{
    ui->lineEdit_Resultat->clear();
}

void Calculatrice::on_pushButton_fois_clicked()
{
    ui->lineEdit_Resultat->insert("*");
}

void Calculatrice::on_pushButton_moin_clicked()
{
    ui->lineEdit_Resultat->insert("-");
}

void Calculatrice::on_pushButton_plus_clicked()
{
    ui->lineEdit_Resultat->insert("+");
}
void Calculatrice::on_pushButton_0_clicked()
{
    ui->lineEdit_Resultat->insert("0");
}
void Calculatrice::on_pushButton_1_clicked()
{
    ui->lineEdit_Resultat->insert("1");
}

void Calculatrice::on_pushButton_2_clicked()
{
    ui->lineEdit_Resultat->insert("2");
}

void Calculatrice::on_pushButton_3_clicked()
{
    ui->lineEdit_Resultat->insert("3");
}

void Calculatrice::on_pushButton_4_clicked()
{
    ui->lineEdit_Resultat->insert("4");
}

void Calculatrice::on_pushButton_5_clicked()
{
    ui->lineEdit_Resultat->insert("5");
}

void Calculatrice::on_pushButton_6_clicked()
{
    ui->lineEdit_Resultat->insert("6");
}

void Calculatrice::on_pushButton_7_clicked()
{
    ui->lineEdit_Resultat->insert("7");
}


void Calculatrice::on_pushButton_8_clicked()
{
    ui->lineEdit_Resultat->insert("8");
}

void Calculatrice::on_pushButton_9_clicked()
{
    ui->lineEdit_Resultat->insert("9");
}


