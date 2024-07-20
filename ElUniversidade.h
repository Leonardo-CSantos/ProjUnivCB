#pragma once

#include "stdafx.h"
#include "Universidade.h"

class ElUniversidade
{
private:
    Universidade* pUniv;
    ElUniversidade* pNext;
    ElUniversidade* pPrev;

public:
    ElUniversidade(Universidade* uni);
    ElUniversidade();
    ~ElUniversidade();

    void setUniversidade(Universidade* uni);
    Universidade* getUniversidade();
    void setNext(ElUniversidade* next);
    ElUniversidade* getNext();
    void setPrev(ElUniversidade* prev);
    ElUniversidade* getPrev();
    char* getNome();
};
