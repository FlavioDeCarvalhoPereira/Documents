#include "barrerondecreuse.h"
#include <iostream>

using namespace std;


BarreRondeCreuse::BarreRondeCreuse(string _ref,string _nom,const float _mVolumique , const float _taille ,const float _diametre, const float _diametreSuppr):
    Barre(_ref,_nom,_mVolumique,_taille),
    diametre(_diametre), diametreSuppr(_diametreSuppr)
{
    cout << "Constructeur BarreRonde" << endl;
}

void BarreRondeCreuse::AfficherCaracteristiques()
{
    cout << endl;
    cout << "Reférence : " << ref << endl;
    cout << "Type : " << nom << endl;
    cout << "Masse volumique : " << mVolumique << " Kg/m3" << endl;
    cout << "Longueur : " << taille/1000 << " m" << endl;
    cout << "Diametre de la barre : " << diametre << "mm" << endl;
    cout  << "Section ronde : " << BarreRondeCreuse::CalculerSection() << " mm2" << endl;
    cout << "Masse de la barre : " << BarreRondeCreuse::CalculerMasse() << "Kg" <<  endl;
    cout << endl;
}

BarreRondeCreuse::~BarreRondeCreuse()
{
    cout << "Destructeur BarreRonde" << endl;
}

float BarreRondeCreuse::CalculerSection()
{
    return M_PI*pow(diametre,2)/4;
}

float BarreRondeCreuse::CalculerMasse()
{
    return ((taille/1000) * (BarreRondeCreuse::CalculerSection()/1000000) * mVolumique) - ((taille/1000) * ((M_PI*pow(diametreSuppr,2)/4)/1000000) * mVolumique);
}
