#include "ElUniversidade.h"

ElUniversidade::ElUniversidade(Universidade* uni)
{
    setUniversidade(uni);
    pNext = NULL;
    pPrev = NULL;
}

ElUniversidade::ElUniversidade()
{
    pUniv = NULL;
    pNext = NULL;
    pPrev = NULL;
}

ElUniversidade::~ElUniversidade()
{
    pUniv = NULL;
    pNext = NULL;
    pPrev = NULL;
}

void ElUniversidade::setUniversidade(Universidade* uni)
{
    pUniv = uni;
}

Universidade* ElUniversidade::getUniversidade()
{
    return pUniv;
}

void ElUniversidade::setNext(ElUniversidade* next)
{
    pNext = next;
}

ElUniversidade* ElUniversidade::getNext()
{
    return pNext;
}

void ElUniversidade::setPrev(ElUniversidade* prev)
{
    pPrev = prev;
}

ElUniversidade* ElUniversidade::getPrev()
{
    return pPrev;
}

char* ElUniversidade::getNome()
{
    return pUniv->getNome();
}
