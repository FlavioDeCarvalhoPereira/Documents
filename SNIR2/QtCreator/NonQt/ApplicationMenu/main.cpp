#include <iostream>
#include "menu.h"
#include "erreurdemenu.h"

using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2,
    OPTION_3,
    OPTION_4,
    QUITTER
};

int main()
{
    try{
    int choix;
        Menu leMenu("../menu.txt");
        do
        {
            choix = leMenu.Afficher();
            switch (choix)
            {
            case OPTION_1:
                cout << "Vous avez choisi l'option n°1" << endl;
                Menu::AttendreAppuiTouche();
                break;

            case OPTION_2:
                cout << "Vous avez choisi l'option n°2" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_3:
                cout << "Vous avez choisi l'option n°3" << endl;
                Menu::AttendreAppuiTouche();
                break;
            case OPTION_4:
                cout << "Vous avez choisi l'option n°4" << endl;
                Menu::AttendreAppuiTouche();
                break;
            }
        } while(choix != QUITTER);
}
    catch(ErreurDeMenu error){
    cout << "erreur numero "<< error.getCodeErreur()<<endl;
    cout <<error.getMessage()<<endl;
    exit(EXIT_FAILURE);
    }

    return 0;
}
