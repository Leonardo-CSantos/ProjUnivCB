#pragma once

#include "stdafx.h"

class Departamento;
class Aluno;

class Disciplina
{
    private:
        char nomeDisc[50];
        Disciplina* pNextDisc;
        Disciplina* pPrevDisc;
        Departamento* pDpto;
        Aluno* pAlunoPrim;
        Aluno* pAlunoAtual;
        int nAlunos;

    public:
        Disciplina ();
        ~Disciplina ();

        void setNome(const char* nome);
        char* getNome ();
        void setNextDisc(Disciplina* next);
        Disciplina* getNextDisc ();
        void setPrevDisc (Disciplina* prev);
        Disciplina* getPrevDisc ();
        void setDpto (Departamento* dep);
        Departamento* getDpto ();
        void addAluno (Aluno* aluno);
        void listAlunos ();
};
