#include "Pessoa.h"
#include "stdafx.h"
#include "Universidade.h"
#include "Departamento.h"

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, const char* nome, int pId)
{
    inicializa (diaNa, mesNa, anoNa, nome, pId);
}

Pessoa::Pessoa ()
{
    inicializa (0, 0, 0);
}

Pessoa::~Pessoa ()
{

}

void Pessoa::inicializa (int diaNa, int mesNa, int anoNa, const char* nome, int pId)
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    idadeP = -1;
    setNome (nome);
    id = pId;
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

void Pessoa::setNome (const char* nome)
{
    strcpy (nomeP, nome);
}

char* Pessoa::getNome ()
{
    return nomeP;
}

void Pessoa::setId(int pId)
{
    id = pId;
}

int Pessoa::getId ()
{
    return id;
}
