#pragma once
#include "Pessoa.h"
#include "Universidade.h"

class Principal
{
    private:
        Pessoa Einstein;
        Pessoa Newton;
        Pessoa Leonardo;

        Universidade Cambridge;
        Universidade Princeton;
        Universidade UTFPR;

        int diaAt;
        int mesAt;
        int anoAt;

    public:
        Principal ();
        ~Principal ();
        void Executar ();
};

