#include "barrehexagone.h"
#include <iostream>

using namespace std;


BarreHexagone::BarreHexagone(string _ref,string _nom,const float _mVolumique , const float _taille ,const float _diametre):
    Barre(_ref,_nom,_mVolumique,_taille),
    diametre(_diametre)
{
    cout << "Constructeur BarreHexagone" << endl;
}



BarreHexagone::~BarreHexagone()
{
    cout << "Destructeur BarreHexagone" << endl;
}

void BarreHexagone::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reférence : " << ref << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Diametre de la barre : " << diametre << "mm" << endl;
    cout  << "Section hexagone : " << BarreHexagone::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreHexagone::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

float BarreHexagone::CalculerSection()
{
    return 2*pow(diametre,2)*(sqrt(2)-1);
}

float BarreHexagone::CalculerMasse()
{
    return (taille/1000) * (BarreHexagone::CalculerSection()/1000000) * mVolumique;
}
