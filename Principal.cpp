#include "Principal.h"

Principal::Principal ()
{
    Einstein.inicializa(14, 3, 1879, "Einstein");
    Newton.inicializa(4, 1, 1643, "Newton");

    diaAt = 13; mesAt = 7; anoAt = 2024;

    Executar();

}

void Principal::Executar ()
{
    Einstein.calculaIdade(diaAt, mesAt, anoAt);
    Newton.calculaIdade(diaAt, mesAt, anoAt);
    Einstein.printIdade();
    Newton.printIdade();
}
