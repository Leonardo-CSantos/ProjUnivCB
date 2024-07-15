#pragma once

#include "stdafx.h"
#include "Pessoa.h"

class Aluno : public Pessoa
{
    private:
        int RA;
        Aluno* pNextAluno;
        Aluno* pPrevAluno;

    public:
        Aluno (int diaNa, int mesNa, int anoNa, const char* nome = "");
        Aluno ();
        ~Aluno ();

        void setRA (int a);
        int getRA ();
        void setNextAluno (Aluno* next);
        Aluno* getNextAluno ();
        void setPrevAluno (Aluno* prev);
        Aluno* getPrevAluno ();

};
