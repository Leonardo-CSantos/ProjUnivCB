#pragma once

#include "stdafx.h"
#include "ListaDepartamento.h"

class Universidade
{
private:
    int id;
    char nomeU[30];
    ListaDepartamento listaDptos;

public:
    Universidade (const char* nome, int uniId);
    Universidade ();
    ~Universidade ();

    void setId(int uniId);
    int getId();
    void setNome (const char* nome);
    char* getNome ();
    void addDptos (Departamento* dpto);
    void getDptos ();
};

