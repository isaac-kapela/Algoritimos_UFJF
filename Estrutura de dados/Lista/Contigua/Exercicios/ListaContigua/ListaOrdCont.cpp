#include <iostream>
using namespace std;
#include "ListaOrdCont.h"

ListaOrdCont::ListaOrdCont(int tam)
{
    tam = 100;
    max = tam;
    n = 0;
    vet = new int[max];
}
ListaOrdCont::~ListaOrdCont()
{

    delete [] vet;
}

int ListaOrdCont::get(int k)
{
    if(k>=n && k < n)
    {
        return vet[k];
    }
    else
    {
        cout << "Indice invalido! " << endl;
        exit(1);
    }

}

int ListaOrdCont::buscaBinaria(int val)
{
    int esq =0;
    int dir =n-1;
    while(esq<=dir)
    {
        int meio = (esq + dir)/2;
        if(val >vet[meio])
        {
            // se existir, val esta na segunda metade
            esq = meio +1;
        }
        else if(val < vet[meio])
        {
            // se existir, val esta na primeira metade
            dir = meio-1;
        }
        else
        {
            return meio // val na posição meio
        }
        return -1; // val não encontrado
    }
}

bool ListaOrdCont::busca(int val)
{
    int k = buscaBinaria(val);

    return k>=0 && k < n;
}

void ListaOrdCont::insere(int val){
    int i;
    if(n == max){
        cout << " Vetor cheio"<< endl;
        exit(1);
    }
    for(i = n-1; i>= 0 &&  vet[i] >= val; i--){
        vet[i+1] = vet[i];
    }
    vet[i+1] = val;
    n = n+1;
}

void ListaOrdCont::remove(int val){
    int k = buscaBinaria(val);
    if(k>= 0 && k < n){
        //copia  da direita  para esquerda
        for(int i =k; i < n-1; i++){
            vet[i] = vet[i+1];
        }
        n =n-1;
    }

}
