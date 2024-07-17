#include "ElDepartamento.h"

ElDepartamento::ElDepartamento(Departamento* dpto)
{
    setDpto(dpto);
    pDptoNext = NULL;
    pDptoPrev = NULL;
}

ElDepartamento::ElDepartamento()
{
    pDpto = NULL;
    pDptoNext = NULL;
    pDptoPrev = NULL;
}

ElDepartamento::~ElDepartamento()
{
    pDpto = NULL;
    pDptoNext = NULL;
    pDptoPrev = NULL;
}

void ElDepartamento::setDpto(Departamento* dpto)
{
    pDpto = dpto;
}

Departamento* ElDepartamento::getDpto()
{
    return pDpto;
}

char* ElDepartamento::getNome()
{
    return pDpto->getNome();
}

void ElDepartamento::setNext(ElDepartamento* next)
{
    pDptoNext = next;
}

ElDepartamento* ElDepartamento::getNext()
{
    return pDptoNext;
}

void ElDepartamento::setPrev(ElDepartamento* prev)
{
    pDptoPrev = prev;
}

ElDepartamento* ElDepartamento::getPrev()
{
    return pDptoPrev;
}
