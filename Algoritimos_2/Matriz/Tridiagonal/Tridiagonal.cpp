#include "TadTridiagonal.h"
#include <iostream>
using namespace std;

TadTridigonal::TadTridigonal(int ordem)
{
    int tam;
    n =ordem;
    tam = (3*n)-2;
    vet = new int [tam];
}

TadTridigonal::~TadTridigonal()
{
    delete [] vet;
}

bool TadTridigonal::verifica(int i, int j)
{
    if(i>= 0 && i <n && j>= 0 && j<n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int TadTridigonal::get(int i, int j)
{
    if(!verifica(i,j))
    {
        cout << "Indice invalido" << endl;
        exit(1);
    }
    else{
    int k;
    if(i==j)
    {
        k=i;
    }
    else if(i<j)
    {
        k =(n-1)+j;
    }
    else if(i>j)
    {
        k =(2*n-1)+i;
    }
    else
    {
        return 0;
    }
    return vet[k];
    }
}

void TadTridigonal::set(int i, int j, int val)
{
    if(!verifica(i,j))
    {
        cout << "Indice invalido" << endl;
        exit(1);
    }
    else
    {
        int k;
        if(i==j)
        {
            k=i;
        }
        else if(i<j)
        {
            k =(n-1)+j;
        }
        else if(i>j)
        {
            k =(2*n-1)+i;
        }
        else
        {
            cout << "Não é possível definir valores abaixo da diagonal principal e da diagonal superior e inferior!" << endl;

        }
         vet[k] = val;

    }
}
void TadTridigonal::preencheVet(){
    int tam = (3*n)-2;
    for(int i =0; i <tam; i++){
        vet[i] = i+1;
    }
}

void TadTridigonal::imprimeVet(){
    int tam = (3*n)-2;
    for(int i =0; i < tam; i++){
        cout << vet[i] << " ";
    }
}

