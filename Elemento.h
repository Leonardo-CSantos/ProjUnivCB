#pragma once

#include "stdafx.h"

template<class TIPO>
class Elemento
{
private:
    TIPO* info;
    Elemento<TIPO>* pNext;
    Elemento<TIPO>* pPrev;
    char nome[150];

public:
    Elemento (){    info = NULL;
                    pNext = NULL;
                    pPrev = NULL;
                    setNome("");}
    ~Elemento (){   info = NULL;
                    pNext = NULL;
                    pPrev = NULL;}

    void setInfo (TIPO* in) {info = in;}
    TIPO* getInfo () {return info;}
    void setNext (Elemento<TIPO>* next) {pNext = next;}
    Elemento<TIPO>* getNext () {return pNext;}
    void setPrev (Elemento<TIPO>* prev) {pPrev = prev;}
    Elemento<TIPO>* getPrev () {return pPrev;}
    void setNome (const char* n) {strcpy (nome, n);}
    char* getNome () {return nome;}
};
