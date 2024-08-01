#include "ListaAlunos.h"

ListaAluno::ListaAluno()
{

}

ListaAluno::~ListaAluno()
{

}

void ListaAluno::addAluno (Aluno* aluno)
{
    LTAlunos.addInfo(aluno, aluno->getNome());
}

void ListaAluno::listAlunos ()
{
    Elemento<Aluno>* aux = LTAlunos.getPrim();

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getNext();
    }
}

void ListaAluno::listAlunosBackwards()
{
    Elemento<Aluno>* aux = LTAlunos.getAtual();

    while (aux != NULL)
    {
        cout << aux->getNome() << endl;
        aux = aux->getPrev();
    }
}

Aluno* ListaAluno::localizar (char* nomeAluno)
{
    Elemento<Aluno>* aux = LTAlunos.getPrim();
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

    Elemento<Aluno>* pElAlunoAux = LTAlunos.getPrim();
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
    LTAlunos.limpalista ();
}
