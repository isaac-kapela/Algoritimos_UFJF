#include <iostream>
#include "ListaCont.h"
using namespace std;

ListaCont::ListaCont(int tam)
{
    max = tam;
    n = 0;
    vet = new int [max];
}
ListaCont::~ListaCont()
{
    delete [] vet;
}

int ListaCont::get(int k)
{
    if(k>= 0 && k <n)
    {
        return vet[k];
    }
    else
    {
        cout << " indice invalidos" << endl;
        exit(1);
    }
}

void ListaCont::set(int k, int val)
{
    if(k>= 0 && k < n)
    {
        vet[k] = val;
    }
    else
    {
        cout << "Indice invalidos" << endl;
    }
}

void ListaCont::insereFinal(int val){
    if(n==max){
        cout << " cheio" << endl;
    }
    else{
        vet[n] = val;
        n = n+1;
    }
}

void ListaCont::removeFinal(){
    if(n==0){
        cout << "Lista vazia" << endl;
    }
    else{
        n = n-1;
    }
}

void ListaCont::insereK(int k, int val){
    if(n== max){
        cout << "Vetor cheio"<< endl;
    }
    else if(k>=0 && k < n){
        for(int i =n; i> k; i--){
            vet[i] = vet[i-1];
        }
        vet[k] = val;
        n = n+1;
    }
    else{
        cout << "Indice invalido" << endl;
    }
}

void ListaCont::removeK(int k){
    if(k>= 0 &&  k < n){
        for(int i =k; i < n-1; i++){
            vet[i] = vet[i+1];
        }
        n = n-1;
    }
    else{
        cout << "Indice invalidos" << endl;
    }
}
