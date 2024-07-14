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
    //Leonardo.inicializa (21, 6, 1999, "Leonardo");
    Leonardo.setNome("Leonardo");

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

}
