#pragma once
class Universidade;

class Departamento
{
    private:
        char nomeDpto[30];
        Universidade* pUni;

    public:
        Departamento (const char* nome);
        Departamento ();
        ~Departamento ();

        void setNome (const char* nome);
        char* getNome ();
        void setUniv (Universidade* Uni);
        void getUniv ();
};
