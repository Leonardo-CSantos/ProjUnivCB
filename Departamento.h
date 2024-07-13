#pragma once

class Departamento
{
    private:
        char nomeDpto[30];

    public:
        Departamento (const char* nome);
        Departamento ();
        ~Departamento ();

        void setNome (const char* nome);
        char* getNome ();
};
