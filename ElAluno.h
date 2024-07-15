#pragma once

#include "stdafx.h"
#include "Aluno.h"

class ElAluno
{
    private:
        Aluno* pAl;
        ElAluno* pNext;
        ElAluno* pPrev;

    public:
        ElAluno(Aluno*);
        ElAluno();
        ~ElAluno();

        void setAluno (Aluno* aluno);
        Aluno* getAluno ();
        void setNext (ElAluno* next);
        ElAluno* getNext ();
        void setPrev (ElAluno* prev);
        ElAluno* getPrev ();
};
