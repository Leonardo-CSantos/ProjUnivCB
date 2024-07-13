#include "Principal.h"
#include <time.h>
#include <Windows.h>

Principal::Principal ()
{
    Einstein.inicializa(14, 3, 1879, "Einstein");
    Newton.inicializa(4, 1, 1643, "Newton");

    SYSTEMTIME st;
    GetSystemTime (&st);
    diaAt = st.wDay;
    mesAt = st.wMonth;
    anoAt = st.wYear;

    Executar();

}

void Principal::Executar ()
{
    Einstein.calculaIdade(diaAt, mesAt, anoAt);
    Newton.calculaIdade(diaAt, mesAt, anoAt);
    Einstein.printIdade();
    Newton.printIdade();
}
