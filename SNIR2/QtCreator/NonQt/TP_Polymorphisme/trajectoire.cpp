#include <iostream>
#include <iomanip>
#include "trajectoire.h"

using namespace std;

Trajectoire::Trajectoire(int _nbEtapesMaxi):
    nbEtapesMaxi(_nbEtapesMaxi)
{
    lesElements = new Element *[nbEtapesMaxi];
    prochaineEtape = 0;
}

Trajectoire::~Trajectoire()
{
    delete [] lesElements;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if (prochaineEtape < nbEtapesMaxi )
    {
           lesElements[prochaineEtape++] = _pElement ;
    }
    else
    {
        retour = false;
    }
    return retour;
}

void Trajectoire::Afficher()
{
    cout << "Trajectoire : " << endl;
    cout << endl;

    for (int indice = 0; indice < prochaineEtape ; indice++)
    {
        cout << "(" << indice + 1 << ") " ;
        lesElements[indice]->Afficher();
    }
}


