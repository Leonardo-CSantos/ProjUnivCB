
class Pessoa
{
    private:
        int diaP;
        int mesP;
        int anoP;
        int idadeP;
        char nomeP[30];

    public:
        Pessoa (int diaNa, int mesNa, int anoNa, const char* nome = "");
        void calculaIdade (int diaAt, int mesAt, int anoAt);
        int getIdade ();
        void printIdade ();

};

