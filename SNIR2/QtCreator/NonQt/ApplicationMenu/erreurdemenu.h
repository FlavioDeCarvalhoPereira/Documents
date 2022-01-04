#ifndef ERREURDEMENU_H
#define ERREURDEMENU_H
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <algorithm>
using namespace std;

class ErreurDeMenu
{
private :
    int codeErreur;
    string message;
public:
    ErreurDeMenu(int _codeErreur,string _message);
    int getCodeErreur();
    string getMessage();
};

#endif // ERREURDEMENU_H
