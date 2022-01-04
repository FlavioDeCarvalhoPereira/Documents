#include "barrecarree.h"
#include <iostream>

using namespace std;


BarreCarree::BarreCarree(string _ref,string _nom,const float _mVolumique , const float _taille ,const float _longueur):
    Barre(_ref,_nom,_mVolumique,_taille),
    longueur(_longueur)
{
    cout << "Constructeur BarreCarre" << endl;
}


void BarreCarree::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reférence : " << ref << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Longueur du coté : " << longueur << "mm" << endl;
    cout  << "Section carre : " << BarreCarree::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreCarree::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

BarreCarree::~BarreCarree()
{
    cout << "Destructeur BarreCarre" << endl;
}

float BarreCarree::CalculerSection()
{
    return longueur * longueur;
}

float BarreCarree::CalculerMasse()
{
    return (taille/1000) * (BarreCarree::CalculerSection()/1000000) * mVolumique;
}
