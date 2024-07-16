#include "ElAluno.h"
#include "Aluno.h"

ElAluno::ElAluno (Aluno* aluno)
{
    setAluno(aluno);
    pNext = NULL;
    pPrev = NULL;
    nota1 = 0.0;
    nota2 = 0.0;
    notaFinal = 0.0;
    faltas = 0;
}

ElAluno::ElAluno ()
{
    pAl = NULL;
    pNext = NULL;
    pPrev = NULL;
    nota1 = 0.0;
    nota2 = 0.0;
    notaFinal = 0.0;
    faltas = 0;
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

void ElAluno::setn1(float nota)
{
    nota1 = nota;
}

float ElAluno::getn1()
{
    return nota1;
}

void ElAluno::setn2(float nota)
{
    nota2 = nota;
}

float ElAluno::getn2()
{
    return nota2;
}

void ElAluno::setnf(float nota)
{
    notaFinal = nota;
}

float ElAluno::getnf()
{
    return notaFinal;
}

void ElAluno::addFalta()
{
    faltas++;
}

int ElAluno::getFaltas()
{
    return faltas;
}
