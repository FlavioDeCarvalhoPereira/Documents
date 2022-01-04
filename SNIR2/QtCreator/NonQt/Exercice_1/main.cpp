#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main()
{
    string pays ;
    int nbOr;
    int nbArgent;
    int nbBronze;

    ifstream fichier("medaille.txt");
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        cout << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+"  <<  setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << setfill(' ') << endl;
        do
        {
            fichier >> pays >> nbOr >> nbArgent >> nbBronze ;

            if (fichier.good())//Si les valeurs ont bien été lues
            {

                cout << "|" << setw(17) << left << pays << "|" << setw(5) << right << nbOr << "|" << setw(5) << right << nbArgent <<"|" << setw(5) << right << nbBronze << "|" << endl;
            }

        } while(!fichier.eof());
        cout << "+" << setfill('-') << setw(18) << "+" << setfill('-') << setw(6) << "+"  <<  setfill('-') << setw(6) << "+" << setfill('-') << setw(6) << "+" << endl;
    }
    return 0 ;
}
