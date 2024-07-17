#pragma once

#include "stdafx.h"
#include "ListaDepartamento.h"

class Universidade
{
private:
    char nomeU[30];
    ListaDepartamento listaDptos;

public:
    Universidade (const char* nome);
    Universidade ();
    ~Universidade ();

    void setNome (const char* nome);
    char* getNome ();
    void setDptos (Departamento* dpto);
    void getDptos ();
};

