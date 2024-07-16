#include "Disciplina.h"
#include "Departamento.h"

Disciplina::Disciplina ()
{
    strcpy (nomeDisc, "");
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
    nAlunos = 0;
}

Disciplina::~Disciplina ()
{
    pNextDisc = NULL;
    pPrevDisc = NULL;
    pDpto = NULL;

    ElAluno* aux;
    while (pAlunoPrim != NULL)
    {
        aux = pAlunoPrim->getNext();
        delete pAlunoPrim;
        pAlunoPrim = aux;
    }
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
    ElAluno* aux;
    aux = new ElAluno ();
    aux->setAluno(aluno);
    if (nAlunos <= 45)
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

void Disciplina::listAlunos ()
{
    ElAluno* aux = pAlunoPrim;
    cout << "Lista de alunos da Disciplina " << getNome() << ":" << endl;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}
