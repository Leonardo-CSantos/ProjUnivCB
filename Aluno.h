#pragma once

#include "stdafx.h"
#include "Pessoa.h"

class Aluno : public Pessoa
{
    private:
        int RA;

    public:
        Aluno (int diaNa, int mesNa, int anoNa, const char* nome = "");
        Aluno ();
        ~Aluno ();

        void setRA (int a);
        int getRA ();
};
