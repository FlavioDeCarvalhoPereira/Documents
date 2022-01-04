#include <iostream>
#include <iomanip>
#include "segment.h"

using namespace std;

Segment::Segment(int _numero, double _longueur, double _angle, int _vitesse):
    Element(_numero,_vitesse),
    longueur(_longueur),
    angle(_angle)
{

}

void Segment::Afficher()
{
    cout << "SEGMENT L = "<< setw(10) << left  << longueur << "A = " << setw(10) << left << angle << " V = " << vitesse << endl;
}
