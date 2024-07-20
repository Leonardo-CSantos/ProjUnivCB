#pragma once

#include "stdafx.h"
#include "ElUniversidade.h"

class ListaUniversidade
{
private:
    ElUniversidade* pUnivPrim;
    ElUniversidade* pUnivAtual;

public:
    ListaUniversidade();
    ~ListaUniversidade();

    void addUniversidade(Universidade* uni);
    void listUniversidades();
    Universidade* localizar(char* nomeUniv);
};
