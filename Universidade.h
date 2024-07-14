#pragma once
#include "stdafx.h"
#include "Departamento.h"

class Universidade
{
    private:
        char nomeU[30];
        vector<Departamento*> lDptos;

    public:
        Universidade (const char* nome);
        Universidade ();
        ~Universidade ();

        void setNome (const char* nome);
        char* getNome ();
        void setDptos (Departamento* dpto);
        void getDptos ();
};
