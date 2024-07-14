#include "Departamento.h"
#include "Universidade.h"
#include "stdafx.h"

Departamento::Departamento (const char* nome)
{
    setNome (nome);
    pUni = NULL;
}

Departamento::Departamento ()
{
    pUni = NULL;
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

void Departamento::setUniv (Universidade* Uni)
{
    pUni = Uni;
}

void Departamento::getUniv ()
{
    cout << "O Departamento " << nomeDpto << " faz parte da Universidade " << pUni->getNome() << endl;
}

