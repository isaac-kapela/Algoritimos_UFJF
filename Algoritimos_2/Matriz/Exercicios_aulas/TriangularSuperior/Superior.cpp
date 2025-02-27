#include "Superior.h"
#include <iostream>
using namespace std;

Superior::Superior(int ordem)
{
    int tam;
    n = ordem;
    tam = n*(n+1)/2;
    vet = new int [tam];
}
Superior::~Superior()
{
    delete [] vet;
}

bool Superior::verifica(int i, int j)
{
    if(i>=0 && i <n && j>=0 && j<n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Superior::get(int i, int j)
{
    if(!verifica(i,j))
    {
        cout << "Indices invalidos" << endl;
        exit(1);
    }
    else
    {
        if(i<=j)
        {
            int k;
            k = j*(j+1)/2 +i;
            return vet[k];
        }
    }

}

void Superior::set(int i, int j, int val)
{
    if(!verifica(i,j))
    {
        cout << "Indices invalidos" << endl;
        exit(1);
    }
    if(i<=j)
    {
        int k;
        k = j*(j+1)/2 +i;
        vet[k] = val;
    }
    else
    {
        cout << "Erro: Não é possível definir valores abaixo da diagonal principal!" << endl;
    }
}


void Superior::preencheVet()
{
    int tam = n*(n+1)/2;
    for(int i =0; i < tam; i++)
    {
        vet[i] = i+1;
    }
}

void Superior::imprimeVet()
{
    int tam = n*(n+1)/2;
    for(int i =0; i < tam; i++)
    {
        cout << vet[i] << " ";
    }
}


