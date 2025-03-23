#include "Inferior.h"
#include <iostream>
using namespace std;

Inferior::Inferior(int ordem)
{
    int tam;
    n =ordem;
    tam = n*(n+1)/2;
    vet = new int [tam];
}
Inferior::~Inferior()
{
    delete [] vet;
}

bool Inferior::ehQuadrada()
{
    return true;
}

int Inferior::detInd(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=n)
    {
        return -1;
    }
    if(i < j)
    {
        return -2;
    }
    return (i * (i + 1)) / 2 + j;
}


int Inferior::get(int i, int j)
{
    int k = detInd(i,j);
    if(k==-1)
    {
        cout << " Indice invalido" << endl;
        exit(1);
    }
    else if(k==-2)
    {
        return 0;
    }
    else
    {
        return vet[k];
    }
}
void Inferior::set(int i, int j, int val)
{
    int k = detInd(i,j);
    if(k==-1)
    {
        cout << "Indice invalidos" << endl;
        // exit(1);
    }
    if(k ==-2)
    {
        cout << "Voce não pode atribuir valores nesta posição" << endl;

    }
    else
    {
        vet[k] = val;
    }
}
void Inferior::preenche()
{
    for(int i =0; i < n; i++)
    {
        for(int j =0; j<=i; j++)
        {
            set(i,j, i+1);
        }
    }
}

void Inferior::imprime()
{
    for(int i =0; i< n; i++)
    {
        for(int j =0; j<n; j++)
        {
            cout << get(i,j)<< " ";
        }
        cout << endl;
    }
}


