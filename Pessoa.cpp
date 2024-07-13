#include "Pessoa.h"
#include <string.h>
#include <iostream>
using namespace std;

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa (diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa ()
{
    inicializa (0, 0, 0);
}

Pessoa::~Pessoa ()
{

}

void Pessoa::inicializa (int diaNa, int mesNa, int anoNa, const char* nome)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    strcpy(nomeP, nome);
}

void Pessoa::calculaIdade (int diaAt, int mesAt, int anoAt)
{
    idadeP = anoAt - anoP;
    if (mesAt < mesP)
        idadeP--;
    else if (mesAt == mesP && diaAt < diaP)
        idadeP--;
}

int Pessoa::getIdade ()
{
    return idadeP;
}

void Pessoa::printIdade ()
{
    cout << "A idade de " << nomeP << " seria " << idadeP << " anos." << endl;
}
