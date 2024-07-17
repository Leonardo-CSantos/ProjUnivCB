#ifndef _DISCIPLINA_H_
#define _DISCIPLINA_H_

#include "stdafx.h"
#include "ListaAlunos.h"
class Departamento;

class Disciplina
{
private:
    char nomeDisc[50];
    Disciplina* pNextDisc;
    Disciplina* pPrevDisc;
    Departamento* pDpto;
    ListaAluno lista;

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
    void listAlunos();
    void listAlunosBackwards();
};
#endif
