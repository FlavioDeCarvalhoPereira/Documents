#include <iostream>
#include "barre.h"
#include "barrecarree.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "barrehexagone.h"
#include "barreoctogone.h"
#include "barrerondecreuse.h"
#include "barrehexagonecreuse.h"
#include "barreoctogonecreuse.h"


using namespace std;

int main()
{
/*
    // ref / nom / masseVolumique / taille
    Barre b1("146565","acier",7850,1000);
    b1.AfficherCaracteristiques();

    // ref / nom / masseVolumique / taille / coteCarre
    BarreCarre bc1("146565","acier",7850,1000,10);
    bc1.AfficherCaracteristiques();

    // ref / nom / masseVolumique / taille / longueur / largeur
    BarreRectangle bre1("146565","acier",7850,1000,10,20);
    bre1.AfficherCaracteristiques();
*/


/*
    // ref / nom / masseVolumique / taille / diametre
    BarreRonde bro1("146565","acier",7850,1000,10);
    bro1.AfficherCaracteristiques();

    // ref / nom / masseVolumique / taille / diametre
    BarreRonde bro2("146565","acier",7850,1000,5);
    bro2.AfficherCaracteristiques();

    BarreRondeCreuse brc1("146565","acier",7850,1000,10,5);
    brc1.AfficherCaracteristiques();
*/

/*
    // ref / nom / masseVolumique / taille / diametre
    BarreHexagone bhe1("146565","acier",7850,1000,10);
    bhe1.AfficherCaracteristiques();

    // ref / nom / masseVolumique / taille / diametre
    BarreHexagone bhe2("146565","acier",7850,1000,5);
    bhe2.AfficherCaracteristiques();

    // ref / nom / masseVolumique / taille / diametre
    BarreHexagoneCreuse bhec1("146565","acier",7850,1000,10,5);
    bhec1.AfficherCaracteristiques();
*/

    // ref / nom / masseVolumique / taille / diametre
    BarreOctogone bocto1("146565","acier",7850,1000,10);
    bocto1.AfficherCaracteristiques();

    // ref / nom / masseVolumique / taille / diametre
    BarreOctogone bocto2("146565","acier",7850,1000,7);
    bocto2.AfficherCaracteristiques();

    BarreOctogoneCreuse boctoc1("146565","acier",7850,1000,10,7);
    boctoc1.AfficherCaracteristiques();

}
