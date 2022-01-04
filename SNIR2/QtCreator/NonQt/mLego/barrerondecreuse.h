#ifndef BARRERONDECREUSE_H
#define BARRERONDECREUSE_H

#include "barre.h"

class BarreRondeCreuse : public Barre
{
public:
    BarreRondeCreuse(string _ref, string _nom, const float _mVolumique, const float _taille, const float _diametre, const float _diametreSuppr);
    ~BarreRondeCreuse();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
    float diametreSuppr;
};

#endif // BARRERONDECREUSE_H
