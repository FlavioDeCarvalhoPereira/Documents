#include "caissedebouteilles.h"
#include <iostream>
using namespace std;



CaisseDeBouteilles::CaisseDeBouteilles(int _largeur, int _hauteur, int _profondeur, int _nbBouteilles, int _contenance):
     Contenant(_largeur,_hauteur,_profondeur)
{

    nbBouteilles = _nbBouteilles;
    contenance = _contenance;
}

CaisseDeBouteilles::~CaisseDeBouteilles()
{
cout << "Destructeur de CaisseDeBouteilles" << endl;
}

int CaisseDeBouteilles::CalculerVolume()
{
return nbBouteilles * contenance;
}
