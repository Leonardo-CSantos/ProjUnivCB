#include "Estagiario.h"

Estagiario::Estagiario (int diaNa, int mesNa, int anoNa, const char* nome)
{
    inicializa (diaNa, mesNa, anoNa, nome);
    bolsaEstudo = 0.0;
}

Estagiario::Estagiario ()
{
    inicializa (0, 0, 0);
    bolsaEstudo = 0.0;
}

Estagiario::~Estagiario ()
{

}

void Estagiario::setBolsaEstudo (float be)
{
    bolsaEstudo = be;
}

float Estagiario::getBolsaEstudo ()
{
    return bolsaEstudo;
}
