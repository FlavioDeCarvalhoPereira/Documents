#include "barrecarre.h"
#include <iostream>

using namespace std;


BarreCarre::BarreCarre(string _nom,const float _mVolumique , const float _taille ,const float _longueur):
    Barre(_nom,_mVolumique,_taille),
    longueur(_longueur)
{
   // cout << "Constructeur BarreCarre" << endl;
}


void BarreCarre::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Réference : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Longueur du coté : " << longueur << "mm" << endl;
    cout  << "Section carre : " << BarreCarre::CalculerSection() << " mm2" << endl;
}

BarreCarre::~BarreCarre()
{
    //cout << "Destructeur BarreCarre" << endl;
}

float BarreCarre::CalculerSection()
{
    return longueur * longueur;
}

float BarreCarre::CalculerMasse()
{
    return (taille/1000) * (BarreCarre::CalculerSection()/1000000) * mVolumique;
}
