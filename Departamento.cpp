#include "Departamento.h"
#include "Universidade.h"

Departamento::Departamento (const char* nome)
{
    setNome (nome);
    pUni = NULL;
}

Departamento::Departamento ()
{
    pUni = NULL;
}

Departamento::~Departamento ()
{
    pUni = NULL;
}

void Departamento::setNome (const char* nome)
{
    strcpy (nomeDpto, nome);
}

char* Departamento::getNome ()
{
    return nomeDpto;
}

void Departamento::setUniv (Universidade* Uni)
{
    pUni = Uni;
}

void Departamento::getUniv ()
{
    cout << "O Departamento " << nomeDpto << " faz parte da Universidade " << pUni->getNome() << endl;
}

void Departamento::addDisc (Disciplina* disc)
{
    listaDisc.addDisc(disc);
    disc->setDpto(this);
}

void Departamento::listDisc ()
{
    cout << "Lista das Disciplinas do Departamento " << nomeDpto << ":" << endl;
    listaDisc.listDisc();
}

void Departamento::listDiscBackwads ()
{
    cout << "Lista das Disciplina do Departamento " << nomeDpto << " de trás para frente:" << endl;
    listaDisc.listDiscBackwards();
}
