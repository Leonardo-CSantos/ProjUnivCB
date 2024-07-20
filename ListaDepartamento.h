#pragma once

#include "stdafx.h"
#include "ElDepartamento.h"

class ListaDepartamento
{
private:
    ElDepartamento* pDptoPrim;
    ElDepartamento* pDptoAtual;

public:
    ListaDepartamento();
    ~ListaDepartamento();

    void addDpto(Departamento* dpto);
    void listDpto();
    void listDptoBackwards();
    Departamento* localizar(char* nomeDpto);
};
