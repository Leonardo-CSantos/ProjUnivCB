#pragma once

#include "stdafx.h"
#include "ElAluno.h"
#include "Aluno.h"

class ListaAluno
{
private:
    ElAluno* pAlunoPrim;
    ElAluno* pAlunoAtual;
    int nAlunos;

public:
    ListaAluno ();
    ~ListaAluno ();

    void addAluno(Aluno* aluno);
    void listAlunos();
    void listAlunosBackwards();
};
