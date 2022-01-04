#include "barreoctogonecreuse.h"

#include <iostream>

using namespace std;


BarreOctogoneCreuse::BarreOctogoneCreuse(string _ref,string _nom,const float _mVolumique , const float _taille ,const float _diametre,const float _diametreSuppr):
    Barre(_ref,_nom,_mVolumique,_taille),
    diametre(_diametre),
    diametreSuppr(_diametreSuppr)
{
    cout << "Constructeur BarreOctogone" << endl;
}



BarreOctogoneCreuse::~BarreOctogoneCreuse()
{
    cout << "Destructeur BarreOctogone" << endl;
}

void BarreOctogoneCreuse::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reférence : " << ref << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Diametre de la barre : " << diametre << "mm" << endl;
    cout  << "Section octogone : " << BarreOctogoneCreuse::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreOctogoneCreuse::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

float BarreOctogoneCreuse::CalculerSection()
{
    return 2*sqrt(3*pow(diametre,2)/4);
}

float BarreOctogoneCreuse::CalculerMasse()
{
    return ((taille/1000) * (BarreOctogoneCreuse::CalculerSection()/1000000) * mVolumique) - ((taille/1000) * ((2*sqrt(3*pow(diametreSuppr,2)/4))/1000000) * mVolumique);
}
