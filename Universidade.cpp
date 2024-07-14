#include "Universidade.h"
#include "stdafx.h"

Universidade::Universidade (const char* nome)
{
    setNome (nome);
    nDptos = 0;
    for (int i = 0; i < 50; i++)
        pDptos[i] = NULL;
}

Universidade::Universidade ()
{
    nDptos = 0;
    for (int i = 0; i < 50; i++)
        pDptos[i] = NULL;
}

Universidade::~Universidade ()
{

}

void Universidade::setNome (const char* nome)
{
    strcpy (nomeU, nome);
}

char* Universidade::getNome ()
{
    return nomeU;
}

void Universidade::setDptos (Departamento* dpto)
{
    if (nDptos < 50)
    {
        pDptos[nDptos] = dpto;
        dpto->setUniv(this);
        nDptos++;
    }
    else
        cout << "Erro, Universidade com mais de 50 Departamentos." << endl;
}

void Universidade::getDptos ()
{
    int i;
    for(i = 0; i < nDptos; i++)
        printf ("%s\n", pDptos[i]->getNome());
}
