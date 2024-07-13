#include "Departamento.h"
#include "stdafx.h"

Departamento::Departamento (const char* nome)
{
    setNome (nome);
}

Departamento::Departamento ()
{

}

Departamento::~Departamento ()
{

}



void Departamento::setNome (const char* nome)
{
    strcpy (nomeDpto, nome);
}

char* Departamento::getNome ()
{
    return nomeDpto;
}

