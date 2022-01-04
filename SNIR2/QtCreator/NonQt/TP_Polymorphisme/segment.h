#ifndef SEGMENT_H
#define SEGMENT_H

#include "element.h"

class Segment : public Element
{
public:
    Segment(int _numero, double _longueur, double _angle, int _vitesse);
    void Afficher();
private:
    double longueur;
    double angle;
};

#endif // SEGMENT_H
