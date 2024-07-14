#pragma once
#include "Departamento.h"

class Universidade
{
    private:
        char nomeU[30];
        Departamento* pDptos[50];
        int nDptos;

    public:
        Universidade (const char* nome);
        Universidade ();
        ~Universidade ();

        void setNome (const char* nome);
        char* getNome ();
        void setDptos (Departamento* dpto);
        void getDptos ();
};
