#include <iostream>
#include"element.h"
#include"trajectoire.h"
#include"segment.h"
using namespace std;

int main()
{
    Trajectoire trajet(2);

    Segment unSegment(1,9,0,3);
    Segment unSegment2(2,5,0.927295,1);

    trajet.Ajouter( &unSegment );
    trajet.Ajouter( &unSegment2 );

    trajet.Afficher();

    cout<< endl;

}
