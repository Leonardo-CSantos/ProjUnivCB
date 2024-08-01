#include "ListaAlunos.h"

ListaAluno::ListaAluno()
{
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
    nAlunos = 0;
}

ListaAluno::~ListaAluno()
{
    limpalista ();
}

void ListaAluno::addAluno (Aluno* aluno)
{
    Elemento<Aluno>* aux;
    aux = new Elemento<Aluno> ();
    aux->setInfo(aluno);
    aux->setNome(aluno->getNome());
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
    Elemento<Aluno>* aux = pAlunoPrim;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

void ListaAluno::listAlunosBackwards()
{
    Elemento<Aluno>* aux = pAlunoAtual;

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrev();
    }
}

Aluno* ListaAluno::localizar (char* nomeAluno)
{
    Elemento<Aluno>* aux = pAlunoPrim;
    while (aux != NULL)
    {
        if (0 == strcmp (nomeAluno, aux->getNome()))
            return aux->getInfo();
        aux = aux->getNext();
    }
    return NULL;
}

void ListaAluno::gravarAlunos ()
{
    ofstream GravadorAlunos ("Alunos.dat", ios::out);

    if (!GravadorAlunos)
    {
        cout << "Arquivo nao pode ser aberto." << endl;
        fflush(stdin);
        getchar ();
        return;
    }

    Elemento<Aluno>* pElAlunoAux = pAlunoPrim;
    Aluno* pAlunoAux = NULL;

    while (pElAlunoAux != NULL)
    {
        pAlunoAux = pElAlunoAux->getInfo();

        GravadorAlunos  << pAlunoAux->getId() << ' '
                        <<  pAlunoAux->getRA() << ' '
                        <<  pAlunoAux->getNome()
                        << endl;

        pElAlunoAux = pElAlunoAux->getNext();
    }

    cout << "Lista gravada com sucesso." << endl;
    GravadorAlunos.close ();
}

void ListaAluno::recuperarAlunos ()
{
    ifstream RecuperadorAlunos ("Alunos.dat", ios::in);

    if (!RecuperadorAlunos)
    {
        cout << "Arquivo nao pode ser aberto" << endl;
        fflush(stdin);
        getchar();
        return;
    }

    limpalista();

    Aluno* pAlunoAux = NULL;
    int id = -1;
    int RA = -1;
    char nome[150];

    while (RecuperadorAlunos >> id >> RA >> nome)
    {
        if (0 != strcmp (nome, ""))
        {
            pAlunoAux = new Aluno();
            pAlunoAux->setId(id);
            pAlunoAux->setRA(RA);
            pAlunoAux->setNome(nome);

            addAluno (pAlunoAux);
        }
    }
    cout << "Lista recuperada com sucesso." << endl;
    RecuperadorAlunos.close();
}

void ListaAluno::limpalista ()
{
    Elemento<Aluno>* aux;
    while (pAlunoPrim != NULL)
    {
        aux = pAlunoPrim->getNext();
        delete pAlunoPrim;
        pAlunoPrim = aux;
    }
    pAlunoPrim = NULL;
    pAlunoAtual = NULL;
}
