#pragma once

class Universidade;
class Departamento;

class Pessoa
{
protected:
    int id;
    int diaP;
    int mesP;
    int anoP;
    int idadeP;
    char nomeP[30];

public:
    Pessoa (int diaNa, int mesNa, int anoNa, const char* nome, int pId);
    Pessoa ();
    ~Pessoa ();

    void setId(int pId);
    int getId();
    void inicializa (int diaNa, int mesNa, int anoNa, const char* nome = "", int pId = -1);
    void calculaIdade (int diaAt, int mesAt, int anoAt);
    int getIdade ();
    void printIdade ();
    void setNome (const char* nome);
    char* getNome ();

};

