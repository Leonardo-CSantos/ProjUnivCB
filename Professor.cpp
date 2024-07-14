#include "Professor.h"

Professor::Professor (int diaNa, int mesNa, int anoNa, const char* nome)
{
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
    cout << "O Professor " << nomeP << " trabalha na Universidade " << pUnivFiliado->getNome() << endl;
}

void Professor::setDpto (Departamento* dep)
{
    pDptoFiliado = dep;
}

void Professor::getDpto ()
{
    cout << "O Professor " << nomeP << " trabalha no Departamento " << pDptoFiliado->getNome() << endl;
}

