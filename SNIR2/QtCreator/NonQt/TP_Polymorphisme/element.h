#ifndef ELEMENT_H
#define ELEMENT_H


class Element
{
public:
    Element(int _numero, int vitesse);
    virtual ~Element();
    virtual void Afficher() = 0;
    int Getter();
    int Setter();
protected:
    int numero = 0;
    int vitesse = 1;
};

#endif // ELEMENT_H
