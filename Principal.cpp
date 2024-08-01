#include "Principal.h"
#include "stdafx.h"
#include <time.h>
#include <Windows.h>

Principal::Principal ()
{
    contIdUniv = 0;
    contIdDpto = 0;
    contIdDisc = 0;
    contIdProf = 0;
    contIdAluno = 0;

    inicializaProfessores ();
    inicializaAlunos ();

    //LPessoas.addInfo(static_cast<Pessoa> &Einstein, Einstein.getNome());
    //LPessoas.addInfo(&Einstein, Einstein.getNome());
    //LPessoas.addInfo(&Einstein, Einstein.getNome());
    //LPessoas.addInfo(&Einstein, Einstein.getNome());
    //LPessoas.addInfo(&Einstein, Einstein.getNome());
    //LPessoas.addInfo(&Einstein, Einstein.getNome());
    //LPessoas.addInfo(&Einstein, Einstein.getNome());


    Cambridge.setNome ("Cambridge");
    Princeton.setNome ("Princeton");
    UTFPR.setNome("UTFPR");

    LUniversidades.addUniversidade(&UTFPR);
    LUniversidades.addUniversidade(&Cambridge);
    LUniversidades.addUniversidade(&Princeton);

    FisicaPrinceton.setNome("Fisica"); FisicaPrinceton.setId(contIdDpto++);
    MatematicaCambridge.setNome ("Matematica"); MatematicaCambridge.setId(contIdDpto++);
    ModaUTFPR.setNome("ModaUTFPR"); ModaUTFPR.setId(contIdDpto++);
    DAELN.setNome("DAELN"); DAELN.setId(contIdDpto++);
    DAINF.setNome("DAINF"); DAINF.setId(contIdDpto++);

    LDepartamentos.addDpto(&FisicaPrinceton);
    LDepartamentos.addDpto(&MatematicaCambridge);
    LDepartamentos.addDpto(&ModaUTFPR);
    LDepartamentos.addDpto(&DAELN);
    LDepartamentos.addDpto(&DAINF);

    UTFPR.addDptos(&DAELN);
    UTFPR.addDptos(&ModaUTFPR);
    UTFPR.addDptos(&DAINF);
    Princeton.addDptos(&FisicaPrinceton);
    Cambridge.addDptos(&MatematicaCambridge);

    TecProg.setNome("Tecnicas de Programacao");
    MatDisc.setNome("Matematica Discreta");
    ED1.setNome("Estruturas De Dados 1");

    LDisciplinas.addDisc(&TecProg);
    LDisciplinas.addDisc(&MatDisc);
    LDisciplinas.addDisc(&ED1);

    SYSTEMTIME st;
    GetSystemTime (&st);
    diaAt = st.wDay;
    mesAt = st.wMonth;
    anoAt = st.wYear;

    Menu();
    Executar();
}

Principal::~Principal ()
{

}

void Principal::inicializaProfessores ()
{
    Einstein.inicializa(14, 3, 1879, "Einstein", contIdProf++);
    Pessoa* pPessoa = static_cast<Pessoa*> (&Einstein);
    LPessoas.addInfo (pPessoa, pPessoa->getNome());

    Newton.inicializa(4, 1, 1643, "Newton", contIdProf++);
    pPessoa = static_cast<Pessoa*> (&Newton);
    LPessoas.addInfo (pPessoa, pPessoa->getNome());
}

void Principal::inicializaAlunos ()
{
    Leonardo.inicializa(29, 6, 1999, "Leonardo", contIdAluno++);
    LAlunos.addAluno(&Leonardo);
    Pessoa* pPessoa = static_cast<Pessoa*> (&Leonardo);
    LPessoas.addInfo (pPessoa, pPessoa->getNome());

    AAA.inicializa(03, 02, 1997, "Lu", contIdAluno++);
    LAlunos.addAluno(&AAA);
    pPessoa = static_cast<Pessoa*> (&AAA);
    LPessoas.addInfo (pPessoa, pPessoa->getNome());

    BBB.inicializa(25, 03, 1999, "Zezinho", contIdAluno++);
    LAlunos.addAluno(&BBB);
    pPessoa = static_cast<Pessoa*> (&BBB);
    LPessoas.addInfo (pPessoa, pPessoa->getNome());
}

void Principal::Menu ()
{
    int op = -1;

    while (op != 5)
    {
        system("cls");
        cout << "Insira a opção desejada:" << endl;
        cout << "1 - Cadastrar." << endl;
        cout << "2 - Executar." << endl;
        cout << "3 - Gravar." << endl;
        cout << "4 - Recuperar." << endl;
        cout << "5 - Sair." << endl;
        cin >> op;

        switch (op)
        {
            case 1:
                {MenuCad();}
            break;
            case 2:
                {MenuExe();}
            break;
            case 3:
                {MenuGravar();}
            break;
            case 4:
                {MenuRecuperar();}
            break;
            case 5:
                {cout << "Fim." << endl;}
            break;
            default:
                {cout << "Opção Inválida!" << endl;
                system("Pause");}
        }
    }
}

void Principal::MenuCad()
{
    int op = -1;

    while (op != 6)
    {
        cout << "Insira a opção desejada:" << endl;
        cout << "1 - Cadastrar Universidade." << endl;
        cout << "2 - Cadastrar Departamento." << endl;
        cout << "3 - Cadastrar Disciplina." << endl;
        //cout << "4 - Cadastrar Professor." << endl;
        cout << "5 - Cadastrar Aluno." << endl;
        cout << "6 - Sair." << endl;
        cin >> op;

        switch (op)
        {
            case 1:
                {CadUniversidade();}
            break;
            case 2:
                {CadDepartamento();}
            break;
            case 3:
                {CadDisciplina();}
            break;
            /*case 4:
                {CadProfessor();}
            break;*/
            case 5:
                {CadAluno();}
            break;
            case 6:
                {cout << "FIM." << endl;}
            break;
            default:
                {cout << "Opção inválida!" << endl;
                system("Pause");}
        }
    }
}

void Principal::CadUniversidade()
{
    Universidade* pUniv = new Universidade();
    char nomeUniv[150];

    cout << "Insira o nome da Universidade:" << endl;
    cin >> nomeUniv;

    pUniv->setNome(nomeUniv);
    LUniversidades.addUniversidade(pUniv);
    cout << "Universidade " << pUniv->getNome() << " incluída no sistema." << endl;
}

void Principal::CadDepartamento()
{
    Universidade* pUniv;
    char nomeUniv[30];


    cout << "Insira o nome da Universidade ao qual o Departamento pertence:" << endl;
    cin >> nomeUniv;

    pUniv = LUniversidades.localizar(nomeUniv);
    if (pUniv != NULL)
    {
        Departamento* pDpto = new Departamento();
        char nomeDpto[30];
        cout << "Insira o nome do Departamento:" << endl;
        cin >> nomeDpto;
        pDpto->setNome(nomeDpto);
        pUniv->addDptos(pDpto);
        LDepartamentos.addDpto (pDpto);
        cout << "Departamento " << pDpto->getNome() << " incluído na Universidade " << pUniv->getNome() << "." << endl;
    }
    else
        cout << "Erro! Universidade não encontrada." << endl;
}

void Principal::CadDisciplina()
{
    Universidade* pUniv;
    char nomeUniv[30];

    cout << "Insira o nome da Universidade ao qual o Departamento pertence:" << endl;
    cin >> nomeUniv;

    pUniv = LUniversidades.localizar(nomeUniv);
    if (pUniv != NULL)
    {
        Departamento* pDpto;
        char nomeDpto[30];
        cout << "Insira o nome do Departamento:" << endl;
        cin >> nomeDpto;

        pDpto = LDepartamentos.localizar(nomeDpto);
        if(pDpto != NULL)
        {
            Disciplina* pDisc = new Disciplina();
            char nomeDisc[50];
            cout << "Insira o nome da Disciplina:" << endl;
            cin >> nomeDisc;

            pDisc->setNome(nomeDisc);
            pDpto->addDisc(pDisc);
            LDisciplinas.addDisc(pDisc);
        }
        else
            cout << "Erro! Departamento não encontrado." << endl;
    }
    else
        cout << "Erro! Universidade não encontrada." << endl;
}
/*
void Principal::CadProfessor()
{

}
*/
void Principal::CadAluno()
{
    Aluno* pAluno = new Aluno();
    char nome[150];

    cout << "Insira o nome do Aluno: " << endl;
    cin >> nome;

    pAluno->setNome(nome);
    LAlunos.addAluno(pAluno);
    Pessoa *pPessoa = static_cast<Pessoa*> (pAluno);
    LPessoas.addInfo(pPessoa, pPessoa->getNome());
    cout << "Aluno " << pAluno->getNome() << " adicionado ao sistema." << endl;
}

void Principal::MenuExe ()
{
    int op = -1;

    while (op != 6)
    {
        system("cls");
        cout << "Informa a opção desejada:" << endl;
        cout << "1 - Listar Universidades." << endl;
        cout << "2 - Listar Departamentos." << endl;
        cout << "3 - Listar Disciplinas." << endl;
        cout << "4 - Listar Pessoas." << endl;
        cout << "5 - Listar Alunos." << endl;
        cout << "6 - Sair." << endl;
        cin >> op;

        switch (op)
        {
            case 1:{LUniversidades.listUniversidades();
                    fflush(stdin);
                    system("Pause");}
            break;
            case 2:{LDepartamentos.listDpto();
                    fflush(stdin);
                    system("Pause");}
            break;
            case 3:{LDisciplinas.listDisc();
                    fflush(stdin);
                    system("Pause");}
            break;
            case 4:{LPessoas.listeInfos();
                    fflush(stdin);
                    system("Pause");}
            break;
            case 5:{LAlunos.listAlunos();
                    fflush(stdin);
                    system("Pause");}
            case 6:{}
            break;
            default:{cout << "Opção Invalida!" << endl;
                    system("Pause");}
        }
    }
}

void Principal::MenuGravar ()
{
    int op = -1;



    while (op != 6)
    {
        system ("cls");
        cout << "Selecione a lista a ser gravada: " << endl;
        cout << "1 - Universidades." << endl;
        cout << "2 - Departamentos." << endl;
        cout << "3 - Disciplinas." << endl;
        cout << "4 - Professores." << endl;
        cout << "5 - Alunos." << endl;
        cout << "6 - Sair." << endl;
        cin >> op;

        switch (op)
        {
            case 5:{LAlunos.gravarAlunos();
                    system ("Pause");}
            break;
            case 6:{cout << "Fim." << endl;}
            break;
            default:{cout << "Opcao invalida" << endl;
                    system ("Pause");}
        }
    }
}

void Principal::MenuRecuperar ()
{
    int op = -1;

    while (op != 6)
    {
        cout << "Selecione a lista a ser recuperada." << endl;
        cout << "1 - Universidades" << endl;
        cout << "2 - Departamentos." << endl;
        cout << "3 - Disciplinas." << endl;
        cout << "4 - Professores." << endl;
        cout << "5 - Alunos." << endl;
        cout << "6 - Sair." << endl;
        cin >> op;

        switch (op)
        {
            case 5:{LAlunos.recuperarAlunos();
                    system("Pause");}
            break;
            case 6:{cout << "Fim." << endl;}
            break;
            default:{cout << "Opcao invalida" << endl;}
        }
    }
}

void Principal::Executar ()
{
    Einstein.calculaIdade(diaAt, mesAt, anoAt);
    Newton.calculaIdade(diaAt, mesAt, anoAt);

    Leonardo.calculaIdade(diaAt, mesAt, anoAt);
    AAA.calculaIdade(diaAt, mesAt, anoAt);
    BBB.calculaIdade(diaAt, mesAt, anoAt);

    Einstein.setUniv(&Princeton);
    Einstein.setDpto(&FisicaPrinceton);

    Newton.setUniv(&Cambridge);
    Newton.setDpto(&MatematicaCambridge);

    //Leonardo.setUniv (&UTFPR);
    //Leonardo.setDpto (&DAINF);

    Einstein.printIdade();
    Einstein.getUniv();
    Einstein.getDpto();

    Newton.printIdade();
    Newton.getUniv();
    Newton.getDpto();

    Leonardo.printIdade();
    //Leonardo.getUniv();
    //Leonardo.getDpto();

    UTFPR.getDptos();
    Princeton.getDptos();
    Cambridge.getDptos();
    DAINF.getUniv();

    DAINF.addDisc(&TecProg);
    DAINF.addDisc(&MatDisc);
    DAINF.addDisc(&ED1);
    DAINF.listDisc();
    DAINF.listDiscBackwads();

    TecProg.addAluno(&Leonardo);
    TecProg.addAluno(&AAA);
    TecProg.addAluno(&BBB);
    TecProg.listAlunos();

    cout << Leonardo.getNome() << ": " << Leonardo.getId() << endl;
    cout << AAA.getNome() << ": " << AAA.getId() << endl;
    cout << BBB.getNome() << ": " << BBB.getId() << endl;
}
