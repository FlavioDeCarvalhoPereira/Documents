#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"

class BarreRectangle : public Barre
{
public:
    BarreRectangle(string _nom,const float _mVolumique , const float _taille ,const float _longueur,const float _largeur);
    ~BarreRectangle();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float longueur;
    float largeur;

};

#endif // BARRERECTANGLE_H
