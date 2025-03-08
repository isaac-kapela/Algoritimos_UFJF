#include "Portal.h"
#include <iostream>
using namespace std;

Portal::Portal(int ordem)
{
    n = ordem;
    int tam = (3 * n) - 2;
    vet = new int[tam];
}

Portal::~Portal()
{
    delete[] vet;
}

int Portal::detInd(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= n)
    {
        return -1;
    }

    if (i == 0)
    {
        return j;
    }
    else if (j == 0)
    {
        return n + i - 1;
    }
    else if (j == n - 1)
    {
        return 2 * n - 1 + i - 1;
    }

    return -2;
}

int Portal::get(int i, int j)
{
    int k = detInd(i, j);
    if (k == -1)
    {
        cout << "Índices inválidos" << endl;
        exit(1);
    }
    else if (k == -2)
    {
        return 0;
    }
    else
    {
        return vet[k];
    }
}

void Portal::set(int i, int j, int val)
{
    int k = detInd(i, j);
    if (k == -1)
    {
        cout << "Índices inválidos" << endl;
        exit(1);
    }
    else if (k == -2)
    {
        vet[k] =0;// cout << "Você não pode atribuir valores nesta posição" << endl;
    }
    else
    {
        vet[k] = val;
    }
}

bool Portal::nula()
{
    int tam = (3 * n) - 2;

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] != 0)
        {
            return false;
        }
    }

    return true;
}
void Portal::imprime()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << get(i,j) << " ";
        }
        cout << endl;
    }
}
void Portal::preenche()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            set(i, j, i + 1);
        }
    }
}

