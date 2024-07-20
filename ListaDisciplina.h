#pragma once

#include "stdafx.h"
#include "ElDisciplina.h"

class ListaDisciplina
{
private:
    ElDisciplina* pDiscPrim;
    ElDisciplina* pDiscAtual;

public:
    ListaDisciplina();
    ~ListaDisciplina();

    void addDisc (Disciplina* disc);
    void listDisc ();
    void listDiscBackwards ();
    Disciplina* localizar(char* nomeDisc);
};
