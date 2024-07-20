#include "ListaUniversidade.h"

ListaUniversidade::ListaUniversidade()
{
    pUnivPrim = NULL;
    pUnivAtual = NULL;
}

ListaUniversidade::~ListaUniversidade()
{
    ElUniversidade* aux = NULL;
    while(pUnivPrim != NULL)
    {
        aux = pUnivPrim->getNext();
        delete pUnivPrim;
        pUnivPrim = aux;
    }
    pUnivPrim = NULL;
    pUnivAtual = NULL;
}

void ListaUniversidade::addUniversidade(Universidade* uni)
{
    ElUniversidade* aux = new ElUniversidade();
    aux->setUniversidade(uni);
    if (pUnivPrim == NULL)
        pUnivPrim = aux;
    else
    {
        pUnivAtual->setNext(aux);
        aux->setPrev(pUnivAtual);
    }
    pUnivAtual = aux;
}

void ListaUniversidade::listUniversidades()
{
    ElUniversidade* aux = pUnivPrim;
    cout << "Lista das Universidades cadastradas:" << endl;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

Universidade* ListaUniversidade::localizar(char* nomeUniv)
{
    ElUniversidade* aux = pUnivPrim;
    while (aux != NULL)
    {
        if (0 == strcmp(nomeUniv, aux->getNome()))
            return aux->getUniversidade();
        else
            aux = aux->getNext();
    }
    return NULL;
}
