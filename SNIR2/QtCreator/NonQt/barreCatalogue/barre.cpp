#include "barre.h"
#include <iostream>

using namespace std;


Barre::Barre( string _nom,const float _mVolumique,const float _taille):
    nom(_nom),mVolumique(_mVolumique),taille(_taille)
{
    //cout << "Constructeur de la classe Barre" << endl;
}

Barre::~Barre()
{
   // cout << "Destructeur de la classe Barre" << endl;
}

void Barre::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << endl;
}
