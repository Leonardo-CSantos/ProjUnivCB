#include "Aluno.h"

Aluno::Aluno (int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa(diaNa, mesNa, anoNa, nome);
    RA = 0;

}

Aluno::Aluno ()
{
    inicializa (0, 0, 0);
    RA = 0;

}

Aluno::~Aluno ()
{

}

void Aluno::setRA (int a)
{
    RA = a;
}

int Aluno::getRA ()
{
    return RA;
}

