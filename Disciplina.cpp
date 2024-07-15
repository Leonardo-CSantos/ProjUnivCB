#include "Disciplina.h"
#include "Departamento.h"
#include "Aluno.h"

Disciplina::Disciplina ()
{
    strcpy (nomeDisc, "");
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
}

Disciplina::~Disciplina ()
{
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
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
    if (pAlunoPrim == NULL)
        pAlunoPrim = aluno;
    else
    {
        pAlunoAtual->setNextAluno(aluno);
        aluno->setPrevAluno(pAlunoAtual);
    }
    pAlunoAtual = aluno;
}

void Disciplina::listAlunos ()
{
    Aluno* aux = pAlunoPrim;
    cout << "Lista de alunos da Disciplina " << getNome() << ":" << endl;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNextAluno();
    }
}
