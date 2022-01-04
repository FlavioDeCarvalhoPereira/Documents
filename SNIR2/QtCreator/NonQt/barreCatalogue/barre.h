#ifndef BARRE_H
#define BARRE_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <algorithm>
#include <math.h>
using namespace std;

class Barre
{
public:
    Barre(string _nom,float _mVolumique,float _taille);

    virtual ~Barre();
    virtual void AfficherCaracteristiques();
    virtual float CalculerMasse() = 0; // fonction virtuelle pure

protected:
    string nom;
    float mVolumique;
    float taille;
};

#endif // BARRE_H
