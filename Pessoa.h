#pragma once
#include "Universidade.h"

class Pessoa
{
    private:
        int diaP;
        int mesP;
        int anoP;
        int idadeP;
        char nomeP[30];
        Universidade *univFiliado;

    public:
        Pessoa (int diaNa, int mesNa, int anoNa, const char* nome = "");
        Pessoa ();
        ~Pessoa ();

        void inicializa (int diaNa, int mesNa, int anoNa, const char* nome = "");
        void calculaIdade (int diaAt, int mesAt, int anoAt);
        int getIdade ();
        void printIdade ();
        void setNome (const char* nome);
        char* getNome ();
        void setUniv (Universidade* uni);
        void getUniv ();
};

