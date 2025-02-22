#include "TADTriangular.h"
#include <iostream>
using namespace std;

TADTriangular::TADTriangular(int ordem)
{
    int tam;
    n = ordem;
    tam = n*(n+1)/2;
    vetor = new int [tam];
}
TADTriangular::~TADTriangular()
{
    delete [] vetor;
}

bool TADTriangular::verifica(int i, int j)
{
    if(i >= 0 && i< n && j >= 0 && j< n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int TADTriangular::get(int i, int j)
{
    if (!verifica(i, j)) {
        cout << "Erro: �ndices inv�lidos!" << endl;
        exit(1);
    }
    if (i >= j) {
        int k = i*(i+1)/2 + j;
        return vetor[k];
    }
    return 0;
}
void TADTriangular::set(int i, int j, int val)
{
    if (!verifica(i, j)) {
        cout << "Erro: �ndices inv�lidos!" << endl;
        return;
    }
    if (i >= j) {
        int k = i*(i+1)/2 + j;
        vetor[k] = val;
    } else {
        cout << "Erro: N�o � poss�vel definir valores abaixo da diagonal principal!" << endl;
    }
}


void TADTriangular::preencheVetor()
{
    int tam = n * (n + 1) / 2;
    for (int p = 0; p < tam; p++) {
        vetor[p] = p + 1;
    }
}

void TADTriangular::imprimeVetor()
{
    int tam = n * (n + 1) / 2;
    for (int l = 0; l < tam; l++) {
        cout << vetor[l] << " ";
    }
}



