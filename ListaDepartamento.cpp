#include "ListaDepartamento.h"

ListaDepartamento::ListaDepartamento()
{
    pDptoPrim = NULL;
    pDptoAtual = NULL;
}

ListaDepartamento::~ListaDepartamento()
{
    pDptoPrim = NULL;
    pDptoAtual = NULL;
}

void ListaDepartamento::addDpto(Departamento* dpto)
{
    ElDepartamento* aux = new ElDepartamento();
    aux->setDpto(dpto);
    if (pDptoPrim == NULL)
        pDptoPrim = aux;
    else
    {
        pDptoAtual->setNext(aux);
        aux->setPrev(pDptoAtual);
    }
    pDptoAtual = aux;
}

void ListaDepartamento::listDpto()
{
    ElDepartamento* aux = pDptoPrim;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

void ListaDepartamento::listDptoBackwards()
{
    ElDepartamento* aux = pDptoAtual;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrev();
    }
}

