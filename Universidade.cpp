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
