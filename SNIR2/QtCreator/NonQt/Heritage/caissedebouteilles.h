#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H
#include"contenant.h"


class CaisseDeBouteilles : public Contenant
{
public:
    CaisseDeBouteilles(int _largeur, int _hauteur,int _profondeur, int _nbBouteilles,int _contenance);
    ~CaisseDeBouteilles();
    int CalculerVolume();

private:
    int nbBouteilles;
    int contenance;
};

#endif // CAISSEDEBOUTEILLES_H
