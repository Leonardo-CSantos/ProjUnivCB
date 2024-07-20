#pragma once

#include "stdafx.h"
#include "ListaDisciplina.h"
class Universidade;

class Departamento
{
private:
    int id;
    char nomeDpto[30];
    Universidade* pUni;
    ListaDisciplina listaDisc;

public:
    Departamento (int dptoId);
    Departamento ();
    ~Departamento ();

    void setId(int dptoId);
    int getId();
    void setNome (const char* nome);
    char* getNome ();
    void setUniv (Universidade* Uni);
    void getUniv ();
    void addDisc (Disciplina* disc);
    void listDisc ();
    void listDiscBackwads ();
};
