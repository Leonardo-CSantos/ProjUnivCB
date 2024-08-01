#pragma once

#include "stdafx.h"
#include "Aluno.h"

class ListaAluno
{
private:
    Lista<Aluno> LTAlunos;

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
