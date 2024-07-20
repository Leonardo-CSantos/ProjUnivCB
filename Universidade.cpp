#include "Universidade.h"
#include "stdafx.h"
#include "Departamento.h"

Universidade::Universidade (const char* nome, int uniId)
{
    id = uniId;
    setNome (nome);
}

Universidade::Universidade ()
{
    id = -1;
}

Universidade::~Universidade ()
{

}

void Universidade::setId(int uniId)
{
    id = uniId;
}

int Universidade::getId()
{
    return id;
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
