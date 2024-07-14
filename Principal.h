#pragma once
#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"
#include "Departamento.h"

class Principal
{
    private:
        Professor Einstein;
        Professor Newton;
        Professor Leonardo;

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

