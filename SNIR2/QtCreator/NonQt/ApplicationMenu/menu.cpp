#include "menu.h"
#include "erreurdemenu.h"


/**
 * @brief Menu::Menu
 * @details constructeur de la classe menu. Elle récupère les différents menu du fichier.txt
 * @param _nom : nom du fichier.txt à mettre
 */
Menu::Menu(const std::string &_nom):nom(_nom), longueurMax(0)
{
    string ligneLu;
    // ouvrir le fichier
    ifstream fichier(nom.c_str()); // c_str() transforme string en char*
    // Si il y a une erreur
    if (!fichier.is_open())
    {

        // alors Afficher un message indiquant une erreur de lecture
        //cerr << "Erreur de lecture" << endl;
        ErreurDeMenu error(1,"Le fichier ne c'est pas ouvert");
        throw (error);
        // et mettre nbOptions à 0
        nbOptions = 0;
    }
    else
    {
        // Sinon calculer nbOptions, le nombre d’options dans le fichier
        /*  while(getline(fichier,ligneLu))
        {
            nbOptions ++;
        }*/

        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichier),istreambuf_iterator<char>(),'\n'));
        fichier.seekg(0,ios::beg);
        // allouer dynamiquement le tableau options en fonction de nbOptions
        options = new string [nbOptions];
        // Pour chaque option dans le fichier
        for (int i =0 ; i < nbOptions ; i++)
        {
            // Lire l’option et l’affecter dans le tableau options
            fichier >> options[i];

            // Si la taille de l’option est plus grande que longueurMax
            if ( static_cast<int>(options[i].length()) > longueurMax)
            {
                // alors longueurMax reçoit la taille de l’option
                longueurMax = options[i].length();
            }


            // FinPour
        }


        // FinSi
    }






    // FinS
}
/**
 * @brief Menu::~Menu
 * @details Destructeur de la classe Menu
 */

Menu::~Menu()
{
    delete[] options;
}

/**
 * @brief Menu::Afficher
 * @details affiche les options du menu selon un fichier.txt avec des options que l'utilisateur va choisir
 * @return le choix de l'utilisateur compris entre 1 et nbOptions
 */

int Menu::Afficher()

{
    int choix;
    int x=0;
    int tailleMax=0;

    for(int i =0;i<nbOptions;i++){
        if(tailleMax < options[i].length())

            tailleMax = static_cast<int>(options[i].length());
    }

    //system("clear");
    cout << "+" << setfill('-') << setw(5) << "+" << setw(tailleMax+4)<<setfill('-')<<"+" << endl;

    for (int i = 0 ; i < nbOptions;i++){
        cout <<right<< "|" << setfill(' ') << setw(3) << i+1 << setw(3) << "| "<< setw(tailleMax+2) << left <<options[i] << "|"<<endl;
    }
    cout << right <<"+" << setfill('-') << setw(5) << "+" << setw(tailleMax+4)<<setfill('-')<<"+" << endl;



    do {
        cout << "Entrer un nombre entre 1 et " << nbOptions <<" : ";
        cin.clear();
        cin >> choix;
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        //  cin >> x;

    }while(choix < 0 || choix > nbOptions);



    //system("clear");
    return choix;
}
/**
 * @brief Menu::AttendreAppuiTouche
 * @details Attend la réception d'une entrée pour continuer le programme
 */

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");

}
