#include "NO.h"
#include <iostream>

NO::NO(float nota)
{
    nota = 0;
    prox = nullptr;
}

NO::NO()
{
    delete prox;
}
