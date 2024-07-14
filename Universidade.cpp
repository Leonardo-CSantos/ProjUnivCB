#include "Universidade.h"
#include "stdafx.h"

Universidade::Universidade (const char* nome)
{
    setNome (nome);
}

Universidade::Universidade ()
{

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
    lDptos.push_back(dpto);
    dpto->setUniv(this);
}

void Universidade::getDptos ()
{
    int tam = (int) lDptos.size();
    for(int i = 0; i < tam; i++)
        printf ("%s\n", lDptos[i]->getNome());
}
