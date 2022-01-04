#include <iostream>
#include "carton.h"
#include "contenant.h"
#include "caissedebouteilles.h"
using namespace std;

int main()
{
    Carton boite(5,5,10,200);
    CaisseDeBouteilles vin(5,5,10,50,30);

// Le constructeur de contenant puis carton qui est appelé

    cout << "Poid maxi du carton : " <<boite.ObtenirPoidsMaxi() << endl;
    cout << "Volume du carton : "<< boite.CalculerVolume() << endl;

    cout <<"Volume brut : " << vin.CalculerVolume() << endl;
    cout << "Volume de la caisse : " << vin.Contenant::CalculerVolume() << endl;
    return 0;
}
