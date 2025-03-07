#include "MatrizLitra.h"
#include <iostream>
using namespace std;
MatrizListra::MatrizListra(int linhas, int colunas)
{
    if(linhas < 1 || colunas < 1)
    {
        cout << "Dimensoes da Matriz Invalidas!" << endl;
        exit(1);
    }
    m = linhas;
    n = colunas;
    qtdPosicoes = (n/2)*m;
    vet = new int [qtdPosicoes];
}

MatrizListra::~MatrizListra()
{
    delete [] vet;
}

int MatrizListra::detInd(int i, int j)
{
    if(i<0 || i>=m || j<0 || j>=n)
    {
        return -1; // indice i e j invalidos
    }
    else if (j%2==0) // Todas as colunas pares tem elementos nulos!
    {
        return -2; // -2 representa elemento nulo
    }
    else
    {
        /*
            Explicacao da formula:
            m eh o numero de linhas, entao podemos usar o m para
            determinar a quantidade de linhas inteiras que ja andou

            Precisamos um multiplicador que varia de 1 em 1 comecando do
            do 0 (0,1,2,3,...) para multiplicar a quantidade de colunas
            completas ja andadas
            Como o j varia na sequencia: (1,3,5,7,9...) percebece que a
            divisao inteira de j por 2 transforma a sequencia em (1/2,
            3/2, 5/2, 7/2, 9/2....) que eh igual a (0,1,2,3,4,...)

            Por fim, somamos i que varia de 0 ate a ultima linha

            Demorei um pouco para raciocinar isso
        */
        return (m*(j/2))+i; /* aqui retorna o valor do elemento da matriz no
                             vetor */
    }
}
bool MatrizListra::ehQuadrada()
{
    if(m==n)
        return true;
    else
        return false;
}

void MatrizListra::setElemento(int i, int j, int val)
{
    k = detInd(i,j);
    if(k == -1)
    {
        cout << "Indice Invalido" << endl;
        exit(1);
    }
    else if(k == -2 && val != 0)
    {
        cout << "Tentando armazenar valor nao nulo na posicao impropria" << endl;
        return;
    }
    else if(k == -2 && val == 0)
        return;
    else
        vet[k] = val;
    return; // nunca chega nessa linha
}

int MatrizListra::getElemento(int i, int j)
{
    k = detInd(i,j);
    if(k==-1)
    {
        cout << "Indices invalidos"<<endl;
    }
    else if(k==-2)
    {
        return 0; // elemento nulo da matriz
    }
    else
        return vet[k];
return 0; // nunca chega aqui
}

void MatrizListra::imprime()
{
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            cout<<getElemento(i,j);
        cout << endl;
    }
}

