#pragma once

#include "stdafx.h"
class Aluno;

class ElAluno
{
    private:
        Aluno* pAl;
        ElAluno* pNext;
        ElAluno* pPrev;

    public:
        ElAluno(Aluno* aluno);
        ElAluno();
        ~ElAluno();

        void setAluno (Aluno* aluno);
        Aluno* getAluno ();
        char* getNome();
        void setNext (ElAluno* next);
        ElAluno* getNext ();
        void setPrev (ElAluno* prev);
        ElAluno* getPrev ();
};
