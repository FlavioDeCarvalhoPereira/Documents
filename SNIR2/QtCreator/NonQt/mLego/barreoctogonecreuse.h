#ifndef BARREOCTOGONECREUSE_H
#define BARREOCTOGONECREUSE_H

#include "barre.h"

class BarreOctogoneCreuse : public Barre
{
public:
    BarreOctogoneCreuse(string _ref, string _nom, const float _mVolumique, const float _taille, const float _diametre ,const float _diametreSuppr);
    ~BarreOctogoneCreuse();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
    float diametreSuppr;
};

#endif // BARREOCTOGONE_H
