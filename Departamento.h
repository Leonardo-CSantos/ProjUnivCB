#pragma once

#include "stdafx.h"
#include "Disciplina.h"
class Universidade;

class Departamento
{
    private:
        char nomeDpto[30];
        Universidade* pUni;
        Disciplina* pDiscPrim;
        Disciplina* pDiscAtual;


    public:
        Departamento (const char* nome);
        Departamento ();
        ~Departamento ();

        void setNome (const char* nome);
        char* getNome ();
        void setUniv (Universidade* Uni);
        void getUniv ();
        void addDisc (Disciplina* disc);
        void listDisc ();
        void listDiscBackwads ();
};
