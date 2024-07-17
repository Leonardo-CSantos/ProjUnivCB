#include "ListaDisciplina.h"

ListaDisciplina::ListaDisciplina()
{
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}

ListaDisciplina::~ListaDisciplina()
{

}

void ListaDisciplina::addDisc (Disciplina* disc)
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
}

void ListaDisciplina::listDisc ()
{
    ElDisciplina* aux = pDiscPrim;
    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

void ListaDisciplina::listDiscBackwards ()
{
    ElDisciplina* aux = pDiscAtual;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrev();
    }
}

