#include "barrerectangle.h"
#include <iostream>

using namespace std;



BarreRectangle::BarreRectangle(string _nom,const float _mVolumique , const float _taille ,const float _longueur,const float _largeur):
    Barre(_nom,_mVolumique,_taille),
    longueur(_longueur),
    largeur(_largeur)
{
    //cout << "Constructeur BarreRectangle" << endl;
}

void BarreRectangle::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Longueur du coté : " << longueur << "mm" << endl;
    cout << "largeur du coté : " << largeur << "mm" << endl;
    cout  << "Section rectangle : " << BarreRectangle::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreRectangle::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

BarreRectangle::~BarreRectangle()
{
   // cout << "Destructeur BarreRectangle" << endl;
}

float BarreRectangle::CalculerSection()
{
    return largeur * longueur;
}

float BarreRectangle::CalculerMasse()
{
    return (taille/1000) * (BarreRectangle::CalculerSection()/1000000) * mVolumique;
}
