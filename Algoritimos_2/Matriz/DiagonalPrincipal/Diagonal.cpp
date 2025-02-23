#include "TadDiagonal.h";
#include <iostream>
using namespace std;

TadDiagonal::TadDiagonal(int ordem)
{
    n = ordem;
    int tam = n;
    vet = new int[tam];
}

TadDiagonal::~TadDiagonal()
{
    delete [] vet;
}

bool TadDiagonal::verifica(int i, int j)
{
    if(i >= 0 && i < n && j >= 0 && j < n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int TadDiagonal::get(int i, int j)
{
    if(!verifica(i, j))
    {
        cout << "indice invalido" << endl;
        exit(1);
    }
    if(i==j)
    {
        int k ;
        return vet[i];
    }
    return 0;
}

void TadDiagonal::set(int i, int j, int valor)
{
    if(!verifica(i,j))
    {
        cout << "indice invalido" << endl;
        return;
    }
    if(i==j)
    {
        int k ;
        vet[i] = valor;
    }
    else
    {
        cout << " não é possivel atribuir valores fora da diagonal principal" << endl;
    }
}
void TadDiagonal::preencheVetor()
{
    int tam = n;
    for(int p = 0; p < tam; p++)
    {
        vet[p] = p+2;
    }
}

void TadDiagonal::imprimeVetor()
{
    int tam = n;
    for(int p = 0; p < tam; p++)
    {
      cout <<  vet[p]<< " ";
    }
}


