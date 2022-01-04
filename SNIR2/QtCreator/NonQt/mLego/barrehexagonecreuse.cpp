#include "barrehexagonecreuse.h"
#include <iostream>

using namespace std;


BarreHexagoneCreuse::BarreHexagoneCreuse(string _ref,string _nom,const float _mVolumique , const float _taille ,const float _diametre, const float _diametreSuppr):
    Barre(_ref,_nom,_mVolumique,_taille),
    diametre(_diametre),
    diametreSuppr(_diametreSuppr)
{
    cout << "Constructeur BarreHexagone" << endl;
}



BarreHexagoneCreuse::~BarreHexagoneCreuse()
{
    cout << "Destructeur BarreHexagone" << endl;
}

void BarreHexagoneCreuse::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reférence : " << ref << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Diametre de la barre : " << diametre << "mm" << endl;
    cout  << "Section hexagone : " << BarreHexagoneCreuse::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreHexagoneCreuse::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

float BarreHexagoneCreuse::CalculerSection()
{
    return 2*pow(diametre,2)*(sqrt(2)-1);
}

float BarreHexagoneCreuse::CalculerMasse()
{
    return ((taille/1000) * (BarreHexagoneCreuse::CalculerSection()/1000000) * mVolumique ) - ((taille/1000) * ((2*pow(diametreSuppr,2)*(sqrt(2)-1))/1000000) * mVolumique);
}
