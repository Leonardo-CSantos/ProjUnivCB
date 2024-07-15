#include "Principal.h"
#include "stdafx.h"
#include <time.h>
#include <Windows.h>

Principal::Principal () :
Leonardo (21, 6, 1999),
UTFPR ("UTFPR"),
DAINF ("DAINF")
{
    Einstein.inicializa(14, 3, 1879, "Einstein");
    Newton.inicializa(4, 1, 1643, "Newton");

    Leonardo.setNome("Leonardo");
    AAA.inicializa(03, 02, 1997, "Lu");
    BBB.inicializa(25, 03, 1999, "Zezinho");

    Cambridge.setNome ("Cambridge");
    Princeton.setNome ("Princeton");

    FisicaPrinceton.setNome("Fisica");
    MatematicaCambridge.setNome ("Matematica");
    ModaUTFPR.setNome("ModaUTFPR");
    DAELN.setNome("DAELN");

    UTFPR.setDptos(&DAELN);
    UTFPR.setDptos(&ModaUTFPR);
    UTFPR.setDptos(&DAINF);
    Princeton.setDptos(&FisicaPrinceton);
    Cambridge.setDptos(&MatematicaCambridge);

    TecProg.setNome("Tecnicas de Programacao");
    MatDisc.setNome("Matematica Discreta");
    ED1.setNome("Estruturas De Dados 1");

    SYSTEMTIME st;
    GetSystemTime (&st);
    diaAt = st.wDay;
    mesAt = st.wMonth;
    anoAt = st.wYear;

    Executar();
}

Principal::~Principal ()
{

}

void Principal::Executar ()
{
    Einstein.calculaIdade(diaAt, mesAt, anoAt);
    Newton.calculaIdade(diaAt, mesAt, anoAt);

    Leonardo.calculaIdade(diaAt, mesAt, anoAt);
    AAA.calculaIdade(diaAt, mesAt, anoAt);
    BBB.calculaIdade(diaAt, mesAt, anoAt);

    Einstein.setUniv (&Princeton);
    Einstein.setDpto (&FisicaPrinceton);

    Newton.setUniv (&Cambridge);
    Newton.setDpto (&MatematicaCambridge);

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
}
