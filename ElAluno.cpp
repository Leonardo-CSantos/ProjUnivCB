#include "ElAluno.h"
#include "Aluno.h"

ElAluno::ElAluno (Aluno* aluno)
{
    setAluno(aluno);
    pNext = NULL;
    pPrev = NULL;
}

ElAluno::ElAluno ()
{
    pAl = NULL;
    pNext = NULL;
    pPrev = NULL;
}

ElAluno::~ElAluno ()
{
    pAl = NULL;
    pNext = NULL;
    pPrev = NULL;
}

void ElAluno::setAluno (Aluno* aluno)
{
    pAl = aluno;
}

Aluno* ElAluno::getAluno ()
{
    return pAl;
}

char* ElAluno::getNome()
{
    return pAl->getNome();
}

void ElAluno::setNext (ElAluno* next)
{
    pNext = next;
}

ElAluno* ElAluno::getNext ()
{
    return pNext;
}

void ElAluno::setPrev (ElAluno* prev)
{
    pPrev = prev;
}

ElAluno* ElAluno::getPrev ()
{
    return pPrev;
}
