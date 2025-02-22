#include <iostream>
#include "MatrizLinha.h"
using namespace std;

MatrizLinha::MatrizLinha(int linha, int coluna)
{
    if(linha < 0 && coluna <0)
    {
        exit(1);
    }
    else
    {
        numLinha = linha;
        numColuna = coluna;
        vet = new int [numLinha*numColuna];
    }


}

MatrizLinha::~MatrizLinha()
{
    delete [] vet;


}

MatrizLinha::detInd(int i, int j)
{
    if(i < 0 && j < 0)
    {
        exit(1);
    }
    else
    {
        return true;
    }
}

MatrizLinha::get(int i, int j)
{
    if(detInd(i,j))
    {
        return i*numColuna+j;
    }
}

MatrizLinha::set(int i,int j,int val)
{

}
