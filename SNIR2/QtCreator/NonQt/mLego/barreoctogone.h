#ifndef BARREOCTOGONE_H
#define BARREOCTOGONE_H

#include "barre.h"

class BarreOctogone : public Barre
{
public:
    BarreOctogone(string _ref, string _nom, const float _mVolumique, const float _taille, const float _diametre);
    ~BarreOctogone();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
};

#endif // BARREOCTOGONE_H
