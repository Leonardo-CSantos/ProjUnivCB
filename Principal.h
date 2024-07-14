#pragma once
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Principal
{
    private:
        Pessoa Einstein;
        Pessoa Newton;
        Pessoa Leonardo;

        Universidade Princeton;
        Universidade Cambridge;
        Universidade UTFPR;

        Departamento FisicaPrinceton;
        Departamento MatematicaCambridge;
        Departamento DAINF;
        Departamento ModaUTFPR;
        Departamento DAELN;

        int diaAt;
        int mesAt;
        int anoAt;

    public:
        Principal ();
        ~Principal ();
        void Executar ();
};

