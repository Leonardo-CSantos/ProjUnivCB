#pragma once

#include "stdafx.h"

template <class TIPO>

class Lista
{
private:
    Elemento<TIPO>* pElementoPrim;
    Elemento<TIPO>* pElementoAtual;

public:
    Lista ();
    ~Lista ();

    void inicializa ();
    bool addElemento (Elemento<TIPO> pEl);
    bool addInfo (TIPO* info, char* nome);
    void listeInfos ();
};

template <class TIPO>
Lista::Lista ()
{

}

template <class TIPO>
Lista::~Lista ()
{

}

template <class TIPO>
void Lista::inicializa ()
{

}


