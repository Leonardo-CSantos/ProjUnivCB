#include "Universidade.h"
#include "stdafx.h"
#include "Departamento.h"

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

void Universidade::addDptos (Departamento* dpto)
{
    listaDptos.addDpto(dpto);
    dpto->setUniv(this);
}

void Universidade::getDptos ()
{
    listaDptos.listDpto();
}
