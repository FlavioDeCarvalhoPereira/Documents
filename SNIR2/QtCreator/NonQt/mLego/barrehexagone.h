#ifndef BARREHEXAGONE_H
#define BARREHEXAGONE_H

#include "barre.h"

class BarreHexagone : public Barre
{
public:
    BarreHexagone(string _ref, string _nom, const float _mVolumique, const float _taille, const float _diametre);
    ~BarreHexagone();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
};

#endif // BARREHEXAGONE_H
