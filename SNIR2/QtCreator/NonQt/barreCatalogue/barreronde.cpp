#include "barreronde.h"
#include <iostream>

using namespace std;


BarreRonde::BarreRonde(string _nom,const float _mVolumique , const float _taille ,const float _diametre):
    Barre(_nom,_mVolumique,_taille),
    diametre(_diametre)
{
    //cout << "Constructeur BarreRonde" << endl;
}

void BarreRonde::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Diametre de la barre : " << diametre << "mm" << endl;
    cout  << "Section ronde : " << BarreRonde::CalculerSection() << " mm2" << endl;
}

BarreRonde::~BarreRonde()
{
   // cout << "Destructeur BarreRonde" << endl;
}

float BarreRonde::CalculerSection()
{
    return M_PI*pow(diametre,2)/4;
}

float BarreRonde::CalculerMasse()
{
    return (taille/1000) * (BarreRonde::CalculerSection()/1000000) * mVolumique;
}
