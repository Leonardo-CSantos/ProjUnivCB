#pragma once

#include "Professor.h"
#include "Aluno.h"
#include "Universidade.h"
#include "Departamento.h"
#include "Disciplina.h"

class Principal
{
    private:
        Professor Einstein;
        Professor Newton;

        Aluno Leonardo;
        Aluno AAA;
        Aluno BBB;

        Universidade Princeton;
        Universidade Cambridge;
        Universidade UTFPR;

        Departamento FisicaPrinceton;
        Departamento MatematicaCambridge;
        Departamento DAINF;
        Departamento ModaUTFPR;
        Departamento DAELN;

        Disciplina TecProg;
        Disciplina MatDisc;
        Disciplina ED1;

        int diaAt;
        int mesAt;
        int anoAt;

    public:
        Principal ();
        ~Principal ();
        void Executar ();
};

