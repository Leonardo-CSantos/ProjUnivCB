#pragma once

#include "Professor.h"
#include "ListaUniversidade.h"

class Principal
{
private:
    int contIdUniv;
    int contIdDpto;
    int contIdDisc;
    int contIdProf;
    int contIdAluno;

    ListaUniversidade LUniversidades;
    ListaDepartamento LDepartamentos;
    ListaDisciplina LDisciplinas;
    ListaAluno LAlunos;

    Professor Einstein;
    Professor Newton;

    Aluno Leonardo;
    Aluno AAA;
    Aluno BBB;

    Universidade Princeton;
    Universidade Cambridge;
    Universidade UTFPR;

    Departamento FisicaPrinceton;
    Departamento MatematicaCambridge;
    Departamento DAINF;
    Departamento ModaUTFPR;
    Departamento DAELN;

    Disciplina TecProg;
    Disciplina MatDisc;
    Disciplina ED1;

    int diaAt;
    int mesAt;
    int anoAt;

public:
    Principal ();
    ~Principal ();

    void Menu ();
        void MenuCad ();
            void CadUniversidade();
            void CadDepartamento();
            void CadDisciplina();
            //void CadProfessor();
            void CadAluno();
        void MenuExe ();
        void MenuGravar ();
        void MenuRecuperar ();
    void Executar ();
};

