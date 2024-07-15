#include "Departamento.h"
#include "Universidade.h"
#include "stdafx.h"

Departamento::Departamento (const char* nome)
{
    setNome (nome);
    pUni = NULL;
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}

Departamento::Departamento ()
{
    pUni = NULL;
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}

Departamento::~Departamento ()
{
    pUni = NULL;
    pDiscPrim = NULL;
    pDiscAtual = NULL;
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

void Departamento::addDisc (Disciplina* disc)
{
    if (pDiscPrim == NULL)
        pDiscPrim = disc;
    else
    {
        pDiscAtual->setNextDisc(disc);
        disc->setPrevDisc(pDiscAtual);
    }
    pDiscAtual = disc;
    pDiscAtual->setDpto(this);
}

void Departamento::listDisc ()
{
    Disciplina* aux = pDiscPrim;
    cout << "Lista das Disciplinas do Departamento " << nomeDpto << ":" << endl;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNextDisc();
    }
}

void Departamento::listDiscBackwads ()
{
    Disciplina* aux = pDiscAtual;
    cout << "Lista das Disciplina do Departamento " << nomeDpto << " de trás para frente:" << endl;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrevDisc();
    }
}
