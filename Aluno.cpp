#include "Aluno.h"

Aluno::Aluno (int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa(diaNa, mesNa, anoNa, nome);
    RA = 0;
    pNextAluno = NULL;
    pPrevAluno = NULL;
}

Aluno::Aluno ()
{
    inicializa (0, 0, 0);
    RA = 0;
    pNextAluno = NULL;
    pPrevAluno = NULL;
}

Aluno::~Aluno ()
{
    pNextAluno = NULL;
    pPrevAluno = NULL;
}

void Aluno::setRA (int a)
{
    RA = a;
}

int Aluno::getRA ()
{
    return RA;
}

void Aluno::setNextAluno (Aluno* next)
{
    pNextAluno = next;
}

Aluno* Aluno::getNextAluno ()
{
    return pNextAluno;
}

void Aluno::setPrevAluno (Aluno* prev)
{
    pPrevAluno = prev;
}

Aluno* Aluno::getPrevAluno ()
{
    return pPrevAluno;
}
