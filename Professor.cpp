#include "Professor.h"

Professor::Professor (int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa (diaNa, mesNa, anoNa, nome);
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::Professor ()
{

}

Professor::~Professor ()
{

}

void Professor::setUniv (Universidade* uni)
{
    pUnivFiliado = uni;
}

void Professor::getUniv ()
{
    cout << "A Pessoa " << nomeP << " faz parte da Universidade " << pUnivFiliado->getNome() << endl;
}

void Professor::setDpto (Departamento* dep)
{
    pDptoFiliado = dep;
}

void Professor::getDpto ()
{
    cout << "A Pessoa " << nomeP << " faz parte do Departamento " << pDptoFiliado->getNome() << endl;
}

