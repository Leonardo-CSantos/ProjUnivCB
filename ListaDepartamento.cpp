#include "ListaDepartamento.h"

ListaDepartamento::ListaDepartamento()
{
    pDptoPrim = NULL;
    pDptoAtual = NULL;
}

ListaDepartamento::~ListaDepartamento()
{
    ElDepartamento* aux = NULL;
    while(pDptoPrim != NULL)
    {
        aux = pDptoPrim->getNext();
        delete pDptoPrim;
        pDptoPrim = aux;
    }
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
    cout << "Lista dos Departamentos cadastrados:" << endl;
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

Departamento* ListaDepartamento::localizar(char* nomeDpto)
{
    ElDepartamento* aux = pDptoPrim;
    while (aux != NULL)
    {
        if (0 == strcmp(nomeDpto, aux->getNome()))
            return aux->getDpto();
        else
            aux = aux->getNext();
    }
    return NULL;
}
