#include "Pessoa.h"

//Ultimas mudan�as: Separou-se Pessoa.h com a defini��o da classe com seus atributos e metodos
//e Pessoa.cpp com a implementa��o dos m�todos
//Criou-se os m�todos getIdade e printIdade

int main ()
{
    Pessoa Einstein (14, 3, 1879, "Einstein");
    Pessoa Newton (4, 1, 1643, "Newton");

    Einstein.calculaIdade(13, 7, 2024);
    Newton.calculaIdade(13, 7, 2024);

    Einstein.printIdade();
    Newton.printIdade();

    return 0;
}
