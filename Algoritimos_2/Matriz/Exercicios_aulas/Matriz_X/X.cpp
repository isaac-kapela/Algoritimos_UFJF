#include "X.h"
#include <iostream>
using namespace std;

X::X(int ordem)
{
    int tam;
    n = ordem;
    if(n%2==0)
    {
        tam = 2*n;
    }
    else
    {
        tam =2*n-1;
    }
    vet = new int[tam];

}

X::~X()
{
    delete [] vet;
}
bool X::ehQuadrada()
{
    return true;
}
int X::detIndPar(int i, int j)
{

    if(i<0 || j>=n || j<0 || j>=n)
    {
        return -1;
    }
    if(i==j)
    {
        return i;
    }
    if(i+j == n-1)
    {
        return n+i;
    }
    return -2;

}

int X::detIndImpar(int i, int j)
{
    if(i<0 || i>=n || j<0 || j>=n )
    {
        return -1;
    }
    if(i==j)
    {
        return i;
    }
    if(i+j ==n-1)
    {
        return n+i;
    }

    return -2;
}

int X::detInd(int i, int j)
{
    if(n%2 ==0)
    {
        return detIndPar(i,j);
    }
    else
    {
        return detIndImpar(i,j);
    }
}

int X::get(int i, int j)
{
    int k = detInd(i,j);
    if(k==-1)
    {
        cout << "Indice invalidos" << endl;
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

void X::set(int i, int j, int val)
{
    int k = detInd(i,j);
    if(k == -1)
    {
        cout << "Indice invalidos" << endl;
        exit(1);
    }
    else if(k !=-2)
    {
        vet[k] = val;
    }
}

void X::preenche()
{
    for(int i =0; i < n; i++)
    {
        for(int j=0; j<n; j++)
        {
            set(i,j, i+1);
        }
    }
}
void X::imprime()
{
    for(int i =0; i < n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << get(i,j) << " ";
        }
        cout << endl;
    }
}

bool X::nula(){
    int tam;
     if(n%2==0)
    {
        tam = 2*n;
    }
    else
    {
        tam =2*n-1;
    }
    for(int i =0; i< tam; i++){
        if(vet[i] !=0){
            return false;
        }

    }
    return true;

}
