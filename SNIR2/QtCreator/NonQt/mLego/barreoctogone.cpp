#include "barreoctogone.h"

#include <iostream>

using namespace std;


BarreOctogone::BarreOctogone(string _ref,string _nom,const float _mVolumique , const float _taille ,const float _diametre):
    Barre(_ref,_nom,_mVolumique,_taille),
    diametre(_diametre)
{
    cout << "Constructeur BarreOctogone" << endl;
}



BarreOctogone::~BarreOctogone()
{
    cout << "Destructeur BarreOctogone" << endl;
}

void BarreOctogone::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reférence : " << ref << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Diametre de la barre : " << diametre << "mm" << endl;
    cout  << "Section octogone : " << BarreOctogone::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreOctogone::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

float BarreOctogone::CalculerSection()
{
    return 2*sqrt(3*pow(diametre,2)/4);
}

float BarreOctogone::CalculerMasse()
{
    return (taille/1000) * (BarreOctogone::CalculerSection()/1000000) * mVolumique;
}
