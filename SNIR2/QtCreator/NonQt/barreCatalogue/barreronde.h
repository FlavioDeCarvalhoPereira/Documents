#ifndef BARRERONDE_H
#define BARRERONDE_H

#include "barre.h"

class BarreRonde : public Barre
{
public:
    BarreRonde(string _nom, const float _mVolumique, const float _taille, const float _diametre);
    ~BarreRonde();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
};

#endif // BARRERONDE_H
