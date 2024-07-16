#pragma once

#include "stdafx.h"
class Aluno;

class ElAluno
{
    private:
        Aluno* pAl;
        ElAluno* pNext;
        ElAluno* pPrev;
        float nota1;
        float nota2;
        float notaFinal;
        int faltas;

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
        void setn1(float nota);
        float getn1();
        void setn2(float nota);
        float getn2();
        void setnf(float nota);
        float getnf();
        void addFalta();
        int getFaltas();
};
