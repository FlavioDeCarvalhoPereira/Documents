#ifndef BARRECARRE_H
#define BARRECARRE_H

#include "barre.h"

class BarreCarre : public Barre
{
public:
    BarreCarre(string _nom,const float _mVolumique,const float _taille,const float _longueur);
    ~BarreCarre();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float longueur;
};

#endif // BARRECARRE_H
