#pragma once

class Universidade
{
    private:
        char nomeU[30];

    public:
        Universidade (const char* nome);
        Universidade ();
        ~Universidade ();

        void setNome (const char* nome);
        char* getNome ();
};
