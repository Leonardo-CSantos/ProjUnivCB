#pragma once

#include "Disciplina.h"

class ElDisciplina
{
    private:
        Disciplina* pDisc;
        ElDisciplina* pNext;
        ElDisciplina* pPrev;

    public:
        ElDisciplina(Disciplina* disc);
        ElDisciplina();
        ~ElDisciplina();

        void setDisc(Disciplina* disc);
        Disciplina* getDisc();
        char* getNome();
        void setNext(ElDisciplina* next);
        ElDisciplina* getNext();
        void setPrev(ElDisciplina* prev);
        ElDisciplina* getPrev();

};
