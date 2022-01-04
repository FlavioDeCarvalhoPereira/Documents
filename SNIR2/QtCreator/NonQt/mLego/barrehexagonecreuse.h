#ifndef BARREHEXAGONECREUSE_H
#define BARREHEXAGONECREUSE_H

#include "barre.h"

class BarreHexagoneCreuse : public Barre
{
public:
    BarreHexagoneCreuse(string _ref, string _nom, const float _mVolumique, const float _taille, const float _diametre, const float _diametreSuppr);
    ~BarreHexagoneCreuse();

    void AfficherCaracteristiques();

    float CalculerSection();
    float CalculerMasse();
private:
    float diametre;
    float diametreSuppr;
};

#endif // BARREHEXAGONECREUSE_H
