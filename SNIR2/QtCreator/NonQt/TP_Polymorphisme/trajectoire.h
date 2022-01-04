#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H

#include "element.h"

class Trajectoire
{
public:
    Trajectoire(int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(Element *_pElement);
    void Afficher();
private:
    Element **lesElements;
    int nbEtapesMaxi;
    int prochaineEtape;
};

#endif // TRAJECTOIRE_H
