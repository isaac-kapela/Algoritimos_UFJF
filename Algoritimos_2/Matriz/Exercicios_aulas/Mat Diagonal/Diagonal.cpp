#include "Diagonal.h"
#include <iostream>
using namespace std;

Diagonal::Diagonal(int ordem)
{
    int tam;
    n = ordem;
    tam = n;
    vet = new int[tam];
}

Diagonal::~Diagonal()
{
    delete [] vet;
}

bool Diagonal::ehPar()
{
    if(n%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Diagonal::detInd(int i, int j)
{
    if(i < 0 || i>=n || j < 0 || j>=n)
    {
        return -1;
    }
    else if(i == j)
    {
        return j;
    }
    else
    {
        return -2;
    }
}

int Diagonal::get(int i, int j)
{
    int k = detInd(i,j);
    if(k==-1)
    {
        cout << " cout << indice invalidos" << endl;
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

void Diagonal::set(int i, int j, int val)
{
    int k = detInd(i,j);
    if(k==-1)
    {
        cout << " indice invalidos" << endl;
        exit(1);
    }
    else if(k==-2)
    {
        return; //cout << "erro: vc não pode alterar valores nesta posição" << endl;
    }
    else
    {
        vet[k] = val;
    }
    return;
}

void Diagonal::preenche(){
    for(int i =0; i < n; i++){
        for(int j =0; j< n; j++){
            set(i, j, i+1);
        }
    }
}

void Diagonal::imprime(){
    for(int i =0; i < n; i++){
        for(int j =0; j < n; j++){
            cout << get(i,j) << " ";
        }
        cout << endl;
    }
}



