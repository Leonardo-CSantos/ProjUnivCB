#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina (int discId)
{
    id = discId;
    strcpy (nomeDisc, "");
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;
}

Disciplina::Disciplina ()
{
    id = -1;
    strcpy (nomeDisc, "");
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;
}

Disciplina::~Disciplina ()
{
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;
}

void Disciplina::setId(int discId)
{
    id = discId;
}

int Disciplina::getId()
{
    return id;
}

void Disciplina::setNome(const char* nome)
{
    strcpy (nomeDisc, nome);
}

char* Disciplina::getNome ()
{
    return nomeDisc;
}

void Disciplina::setNextDisc(Disciplina* next)
{
    pNextDisc = next;
}

Disciplina* Disciplina::getNextDisc ()
{
    return pNextDisc;
}

void Disciplina::setPrevDisc(Disciplina* prev)
{
    pPrevDisc = prev;
}

Disciplina* Disciplina::getPrevDisc ()
{
    return pPrevDisc;
}

void Disciplina::setDpto (Departamento* dep)
{
    pDpto = dep;
}

Departamento* Disciplina::getDpto ()
{
    return pDpto;
}

void Disciplina::addAluno (Aluno* aluno)
{
    lista.addAluno(aluno);
}

void Disciplina::listAlunos()
{
    cout << "Lista de alunos da Disciplina " << getNome() << ":" << endl;
    lista.listAlunos();
}

void Disciplina::listAlunosBackwards()
{
    cout << "Lista de alunos da Disciplina " << getNome() << ":" << endl;
    lista.listAlunosBackwards();
}
