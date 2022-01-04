#include <iostream>
#include "barre.h"
#include "barrecarre.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include "catalogue.h"
#include "menu.h"

using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    QUITTER

};

int main()
{

    int choix;
    BarreRonde uneBarreRonde("Barre 2 en Cuivre",  8920 , 2000 , 20);
    BarreCarre uneBarre("Barre 2x2 en Cuivre",  8920 , 2000 , 20);
    try{
        Menu barre("/home/USERS/ELEVES/SNIR2020/fpereira/Documents/SNIR2/QtCreator/barreCatalogue/menu.txt");
        do
        {
            choix = barre.Afficher();
            switch (choix)
            {
            case OPTION_1:


                Menu::AttendreAppuiTouche();

                break;
            case OPTION_2:



                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:


                Menu::AttendreAppuiTouche();
                break;

            case QUITTER:

                break;
            }
        } while(choix != QUITTER);
    }catch (Exception const &exp) {

        cout << "Erreur" << exp.ObtenirCodeErreur()<< endl;
        cout << exp.ObtenirMessage()<< endl;
        exit (EXIT_FAILURE);

    }
       return 0;
}
