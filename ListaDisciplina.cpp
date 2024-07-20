#include "ListaDisciplina.h"

ListaDisciplina::ListaDisciplina()
{
    pDiscPrim = NULL;
    pDiscAtual = NULL;
}

ListaDisciplina::~ListaDisciplina()
{
    ElDisciplina* aux = NULL;
    while(pDiscPrim != NULL)
    {
        aux = pDiscPrim->getNext();
        delete pDiscPrim;
        pDiscPrim = aux;
    }
    pDiscPrim = NULL;
    pDiscAtual = NULL;
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
    cout << "Lista das Disciplinas cadastradas:" << endl;
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

Disciplina* ListaDisciplina::localizar(char* nomeDisc)
{
    ElDisciplina* aux = pDiscPrim;
    while(aux != NULL)
    {
        if (0 == strcmp(nomeDisc, aux->getNome()))
            return aux->getDisc();
        else
            aux = aux->getNext();
    }
    return NULL;
}

