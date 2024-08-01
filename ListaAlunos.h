#pragma once

#include "stdafx.h"
#include "Aluno.h"

class ListaAluno
{
private:
    Elemento<Aluno>* pAlunoPrim;
    Elemento<Aluno>* pAlunoAtual;
    int nAlunos;

public:
    ListaAluno ();
    ~ListaAluno ();

    void addAluno(Aluno* aluno);
    void listAlunos();
    void listAlunosBackwards();
    Aluno* localizar (char* nomeAluno);
    void gravarAlunos ();
    void recuperarAlunos ();
    void limpalista ();
};
