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
    Leonardo.setNome ("Leonardo");

    Cambridge.setNome ("Cambridge");
    Princeton.setNome ("Princeton");

    Fisica.setNome("Fisica");
    Matematica.setNome ("Matematica");

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
    Einstein.setDpto (&Fisica);

    Newton.setUniv (&Cambridge);
    Newton.setDpto (&Matematica);

    Leonardo.setUniv (&UTFPR);
    Leonardo.setDpto (&DAINF);

    Einstein.printIdade();
    Einstein.getUniv();
    Einstein.getDpto();

    Newton.printIdade();
    Newton.getUniv();
    Newton.getDpto();

    Leonardo.printIdade();
    Leonardo.getUniv();
    Leonardo.getDpto();
}
