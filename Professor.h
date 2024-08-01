#pragma once

#include "stdafx.h"
#include "Pessoa.h"
#include "Universidade.h"
#include "Departamento.h"

class Professor : public Pessoa
{
private:
    Universidade *pUnivFiliado;
    Departamento *pDptoFiliado;
    float salario;
    float bolsaProjeto;

public:
    Professor (int diaNa, int mesNa, int anoNa, const char* nome = "");
    Professor ();
    ~Professor ();

    void setUniv (Universidade* uni);
    void getUniv ();
    void setDpto (Departamento *dep);
    void getDpto ();
    void setSalario (float s);
    float getSalario ();
    void setBolsaProjeto (float s);
    float getBolsaProjeto ();
};
