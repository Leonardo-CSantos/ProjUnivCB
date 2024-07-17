#include "ElDisciplina.h"
#include "Disciplina.h"

ElDisciplina::ElDisciplina(Disciplina* disc)
{
    setDisc(disc);
    pNext = NULL;
    pPrev = NULL;
}

ElDisciplina::ElDisciplina()
{
    pDisc = NULL;
    pNext = NULL;
    pPrev = NULL;
}

ElDisciplina::~ElDisciplina()
{
    pDisc = NULL;
    pNext = NULL;
    pPrev = NULL;
}

void ElDisciplina::setDisc(Disciplina* disc)
{
    pDisc = disc;
}

Disciplina* ElDisciplina::getDisc()
{
    return pDisc;
}

char* ElDisciplina::getNome()
{
    return pDisc->getNome();
}

void ElDisciplina::setNext(ElDisciplina* next)
{
    pNext = next;
}

ElDisciplina* ElDisciplina::getNext()
{
    return pNext;
}

void ElDisciplina::setPrev(ElDisciplina* prev)
{
    pPrev = prev;
}

ElDisciplina* ElDisciplina::getPrev()
{
    return pPrev;
}
