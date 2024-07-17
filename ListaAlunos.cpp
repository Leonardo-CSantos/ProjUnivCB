#include "ListaAlunos.h"

ListaAluno::ListaAluno()
{
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
    nAlunos = 0;
}

ListaAluno::~ListaAluno()
{
    ElAluno* aux;
    while (pAlunoPrim != NULL)
    {
        aux = pAlunoPrim->getNext();
        delete pAlunoPrim;
        pAlunoPrim = aux;
    }
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
}

void ListaAluno::addAluno (Aluno* aluno)
{
    ElAluno* aux;
    aux = new ElAluno ();
    aux->setAluno(aluno);
    if (nAlunos < 45)
    {
        if (pAlunoPrim == NULL)
            pAlunoPrim = aux;
        else
        {
            pAlunoAtual->setNext(aux);
            aux->setPrev(pAlunoAtual);
        }
        pAlunoAtual = aux;
        nAlunos++;
    }
    else
        cout << "Erro, Disciplina lotada!" << endl;
}

void ListaAluno::listAlunos ()
{
    ElAluno* aux = pAlunoPrim;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

void ListaAluno::listAlunosBackwards()
{
    ElAluno* aux = pAlunoAtual;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrev();
    }
}

