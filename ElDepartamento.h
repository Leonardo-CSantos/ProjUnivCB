#pragma once

#include "stdafx.h"
#include "Departamento.h"

class ElDepartamento
{
private:
    Departamento* pDpto;
    ElDepartamento* pDptoNext;
    ElDepartamento* pDptoPrev;

public:
    ElDepartamento(Departamento* dpto);
    ElDepartamento();
    ~ElDepartamento();

    void setDpto(Departamento* dpto);
    Departamento* getDpto();
    char* getNome();
    void setNext(ElDepartamento* next);
    ElDepartamento* getNext();
    void setPrev(ElDepartamento* prev);
    ElDepartamento* getPrev();
};
