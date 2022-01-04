#ifndef BARRECARRE_H
#define BARRECARRE_H

#include "barre.h"

class BarreCarree : public Barre
{
public:
    BarreCarree(string _ref,string _nom,const float _mVolumique,const float _taille,const float _longueur);
    ~BarreCarree();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float longueur;
};

#endif // BARRECARRE_H
