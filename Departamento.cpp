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
    ElDisciplina* aux = new ElDisciplina();
    aux->setDisc(disc);

    if (pDiscPrim == NULL)
        pDiscPrim = aux;
    else
    {
        pDiscAtual->setNext(aux);
        aux->setPrev(pDiscAtual);
    }
    pDiscAtual = aux;
    disc->setDpto(this);
}

void Departamento::listDisc ()
{
    ElDisciplina* aux = pDiscPrim;
    cout << "Lista das Disciplinas do Departamento " << nomeDpto << ":" << endl;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

void Departamento::listDiscBackwads ()
{
    ElDisciplina* aux = pDiscAtual;
    cout << "Lista das Disciplina do Departamento " << nomeDpto << " de trás para frente:" << endl;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrev();
    }
}
