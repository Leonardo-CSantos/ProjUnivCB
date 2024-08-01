#pragma once

#include "stdafx.h"
#include "Aluno.h"

class Estagiario : public Aluno
{
private:
    float bolsaEstudo;

public:
    Estagiario (int diaNa, int mesNa, int anoNa, const char* nome = "");
    Estagiario ();
    ~Estagiario ();

    void setBolsaEstudo (float be);
    float getBolsaEstudo ();
};
