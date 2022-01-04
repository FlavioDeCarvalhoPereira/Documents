#include "compteclient.h"

CompteClient::CompteClient(QObject *parent)
{
    solde =0;
}

bool CompteClient::Retirer(const float montant)
{
    bool x;
    int y = solde;
    solde = solde - montant;

    if (solde < 0 ){
        solde = y;
        x =false;
    } else{

        x= true;
    }
    return  x;
}

void CompteClient::Deposer(const float montant)
{
    if (montant > 0){
    solde = solde + montant;
    }
}

float CompteClient::ObtenirSolde()
{
    return solde;
}

void CompteClient::DefinirNumCompte(const int nc)
{
    solde = 200;
    numCompte = nc;
}

int CompteClient::ObtenirNumCompte()
{
    return numCompte;
}
