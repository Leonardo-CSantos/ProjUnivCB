#pragma once

#include <iostream>
using namespace std;

template <class TIPO>

class Lista
{
private:
    Elemento<TIPO>* pElementoPrim;
    Elemento<TIPO>* pElementoAtual;

public:
    Lista ();
    ~Lista ();

    void setPrim (Elemento<TIPO>* prim);
    Elemento<TIPO>* getPrim ();
    void setAtual (Elemento<TIPO>* atual);
    Elemento<TIPO>* getAtual ();
    bool addElemento (Elemento<TIPO>* pEl);
    bool addInfo (TIPO* info, char* nome);
    void listeInfos ();
    void gravarAlunos ();
    void recuperarAlunos ();
    void limpalista ();
};

template <class TIPO>
Lista<TIPO>::Lista ()
{
    pElementoPrim = NULL;
    pElementoAtual = NULL;
}

template <class TIPO>
Lista<TIPO>::~Lista ()
{
    limpalista ();
}

template <class TIPO>
void Lista<TIPO>::setPrim (Elemento<TIPO>* prim)
{
    pElementoPrim = prim;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getPrim ()
{
    return pElementoPrim;
}

template <class TIPO>
void Lista<TIPO>::setAtual (Elemento<TIPO>* atual)
{
    pElementoAtual = atual;
}

template <class TIPO>
Elemento<TIPO>* Lista<TIPO>::getAtual ()
{
    return pElementoAtual;
}

template <class TIPO>
bool Lista<TIPO>::addElemento (Elemento<TIPO>* pEl)
{
    if (pEl)
    {
        if (pElementoPrim != NULL)
        {
            pEl->setPrev (pElementoAtual);
            pElementoAtual->setNext (pEl);
        }
        else
            pElementoPrim = pEl;
        pElementoAtual = pEl;
        return true;
    }
    else
        cout << "Erro, elemento nulo." << endl;
    return false;
}

template <class TIPO>
bool Lista<TIPO>::addInfo (TIPO* info, char* nome)
{
    if (info)
    {
        Elemento<TIPO>* aux = new Elemento<TIPO> ();
        aux->setInfo(info);
        aux->setNome(nome);
        addElemento(aux);
        return true;
    }
    else
        cout << "Erro, informacao nula." << endl;
    return false;
}

template <class TIPO>
void Lista<TIPO>::listeInfos ()
{
    Elemento<TIPO>* aux = pElementoPrim;
    while (aux != NULL)
    {
        cout << aux->getNome () << endl;
        aux = aux->getNext ();
    }
}

template <class TIPO>
void Lista<TIPO>::limpalista ()
{
    Elemento<TIPO>* aux;
    while (pElementoPrim != NULL)
    {
        aux = pElementoPrim->getNext();
        delete pElementoPrim;
        pElementoPrim = aux;
    }
    pElementoPrim = NULL;
    pElementoAtual = NULL;
}



