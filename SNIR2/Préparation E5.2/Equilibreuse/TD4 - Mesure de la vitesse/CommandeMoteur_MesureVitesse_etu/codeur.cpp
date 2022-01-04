#include "codeur.h"


Codeur::Codeur(MccUldaq &_laCarte, QObject *parent):
    QObject(parent),
    laCarte(_laCarte),
    timerVitesse(new QTimer)
{
    connect(timerVitesse,&QTimer::timeout,this,&Codeur::onTimerVitesse_timeout);
}

Codeur::~Codeur()
{
    delete  timerVitesse;
}

void Codeur::LancerMesureVitesse()
{
    laCarte.UlCClear();
    timerVitesse->start();
}

void Codeur::ArreterMesureVitesse()
{
    timerVitesse->stop();
}

void Codeur::onTimerVitesse_timeout()
{
    long valCpt;
    laCarte.ulCIn(valCpt);
    timerVitesse->start(1000);
    if(valCpt != vitesse){
        emit VitesseChange(valCpt);
    }
    qDebug() << this<<"vitesee" <<valCpt ;
}
