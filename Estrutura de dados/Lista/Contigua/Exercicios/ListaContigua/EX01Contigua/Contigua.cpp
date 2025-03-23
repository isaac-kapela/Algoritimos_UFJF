#include <iostream>
using namespace std;
#include "Contigua.h"

Contigua::Contigua(int tam)
{
    max = tam;
    n =0;
    vet = new int[tam];
}

Contigua::~Contigua()
{
    delete [] vet;
}

int Contigua::get(int k)
{
    if(k>=0 && k<n)
    {
        return vet[k];
    }
    else
    {
        cout << " indice invalidos"<< endl;
        exit(1);
    }
}

void Contigua::insere(int val)
{
    int i;
    if(n==max)
    {
        cout << " cheio" << endl;
        exit(1);
    }
    for(int i = n-1; i >=0  && vet[i] >= val; i-- )
    {
        vet[i+1] = vet[i];
    }
    vet[i+1] = val;
    n++;
}

void Contigua:: imprime()
{
    for (int i = 0; i < n; i++)
    {
        cout << dados[i] << " ";
    }
    cout << std::endl;
}

void Contigua::transfereParaListaOrdenada(int* listaTradicional, int tamanho){
    for(int i =0; i < tamanho; i++){
        insere(listaTradicional[i]);
    }
}
