#include "Pessoa.h"
#include "stdafx.h"

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa (diaNa, mesNa, anoNa, nome);
    univFiliado = NULL;
    depFiliado = NULL;
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
    setNome (nome);
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
    cout << "A idade de " << nomeP << " teria " << idadeP << " anos." << endl;
}

void Pessoa::setNome (const char* nome)
{
    strcpy (nomeP, nome);
}

char* Pessoa::getNome ()
{
    return nomeP;
}

void Pessoa::setUniv (Universidade* uni)
{
    univFiliado = uni;
}

void Pessoa::getUniv ()
{
    cout << "A Pessoa " << nomeP << " faz parte da Universidade " << univFiliado->getNome() << endl;
}

void Pessoa::setDpto (Departamento* dep)
{
    depFiliado = dep;
}

void Pessoa::getDpto ()
{
    cout << "A Pessoa " << nomeP << " faz parte do Departamento " << depFiliado->getNome() << endl;
}
