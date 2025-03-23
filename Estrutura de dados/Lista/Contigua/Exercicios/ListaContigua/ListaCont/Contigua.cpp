#include <iostream>
#include "Contigua.h"
using namespace std;


Contigua::Contigua(int tam)
{
    max = tam;
    n =0;
    vet = new int[max];
}
Contigua::~Contigua()
{
    delete [] vet;
}

int Contigua::get(int k)
{
    if(k>= 0 && k<n)
    {
        return vet[k];
    }
    else
    {
        cout << " indice invalidos" << endl;
        exit(1);
    }
}

int Contigua::buscaBinaria(int val)
{
    int esquerda = 0;
    int direita = n-1;
    while(esquerda <= direita)
    {
        int meio = (esquerda+direita)/2;
        if(val > vet[meio])
        {
            esquerda = meio+1;
        }
        else if(val < vet[meio])
        {
            direita = meio-1;
        }
        else
        {
            return meio;
        }
    }
    return -1;

}
bool Contigua::busca(int val)
{
    int k = buscaBinaria(val);

    return k>= 0 && k < n;
}

void Contigua::insere(int val)
{
    int i;
    if(n == max)
    {
        cout << "Cheio" << endl;
        exit(1);
    }
    for(i = n-1; i>=0 && vet[i] >= val; i--)
    {
        vet[i+1] = vet[i];
    }
    vet[i+1] =  val;
    n++;
}

void Contigua::remove(int val)
{
    int k = buscaBinaria(val);
    for(int i = k; i < n-1; i++)
    {
        vet[i] = vet[i+1];
    }
    n--;
}
bool Contigua::troca(int posicao1, int posicao2 )
{
    if(posicao1>=0 && posicao1 < n && posicao2>=0 && posicao2< n){
        int temp = vet[posicao1];
        vet[posicao1] = vet[posicao2];
        vet[posicao2] = temp;
        return true;
    }
    else{
        return false;
    }
}
