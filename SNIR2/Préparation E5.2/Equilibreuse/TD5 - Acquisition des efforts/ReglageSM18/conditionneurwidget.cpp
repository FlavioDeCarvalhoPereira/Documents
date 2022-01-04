#include "conditionneurwidget.h"
#include "ui_conditionneurwidget.h"

ConditionneurWidget::ConditionneurWidget(QWidget *parent)
    : QWidget(parent), ui(new Ui::ConditionneurWidget){
    ui->setupUi(this);
    numCanal = 0;
    connect(&timer,&QTimer::timeout,this,&ConditionneurWidget::onTimer_timeout);
}

ConditionneurWidget::~ConditionneurWidget(){
    delete ui;
}

void ConditionneurWidget::on_pushButtonLancerMesure_clicked(){
    if(ui->pushButtonLancerMesure->text() == "Lancer Mesure"){
        qDebug() << "Lancement mesure" ;
        ui->pushButtonLancerMesure->setText("Arreter Mesure");
        timer.start(500);
    }else{
        if(ui->pushButtonLancerMesure->text() == "Arreter Mesure"){
            qDebug() << "Arret mesure" ;
            ui->pushButtonLancerMesure->setText("Lancer Mesure");
            timer.stop();
        }
    }
}

void ConditionneurWidget::onTimer_timeout(){
    laCarte.ulAIn(numCanal,tension);
    ui->lcdNumber->display(tension);
}
