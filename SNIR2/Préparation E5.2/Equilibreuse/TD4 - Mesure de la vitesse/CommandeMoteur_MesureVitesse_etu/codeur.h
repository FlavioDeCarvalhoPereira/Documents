#ifndef CODEUR_H
#define CODEUR_H
#include <QObject>
#include <QTimer>
#include <QDebug>
#include "mcculdaq.h"

class Codeur : public QObject
{
    Q_OBJECT
public:
    Codeur(MccUldaq &_laCarte, QObject *parent = nullptr);
    ~Codeur();
    void LancerMesureVitesse();
    void ArreterMesureVitesse();
    int vitesse;
    MccUldaq &laCarte;
    QTimer *timerVitesse;
public slots:
    void onTimerVitesse_timeout();

signals:
    void VitesseChange(int _vitesse);
};

#endif // CODEUR_H
