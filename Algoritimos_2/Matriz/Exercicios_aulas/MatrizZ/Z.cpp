#include "Z.h"
#include <iostream>
using namespace std;

Z::Z(int linha2, int coluna2){
    linha = linha2;
    coluna = coluna2;
    n = linha*coluna;
    int tam = (3*n)-2;
    vet = new int [tam];
}

Z::~Z(){
    delete [] vet;
}
bool Z::ehQuadrada(){
    if(linha == coluna){
        return true;
    }
    else{
        return false;
    }
}
int Z::detInd(int i, int j){
    int k;
    if(i<0 || i>=linha || j <0 || j>=coluna){
        return -1;
    }
    else if(){

    }
    else if(i+j == coluna-1){
        k = i;
    }
    else if(i == 0){
        k = coluna+j;
    }
    else if(i ==  linha-1){
        k = 2*coluna + j-1;
    }
    else{
        return -2;
    }
    return k;
}

int Z::get(int i, int j){
    int indice = k;
    if( indice == -1){
        cout << "Indice invalidos" << endl;
        exit(1);
    }
    else if(indice == -2){
        return 0;
    }
    else{
        return indice;
    }
}
void Z::set(int i, int j, int val){
    int indice= k;
    if(indice ==-1){
        cout << " indice invalidos" << endl;
    }
    else if(indice ==-2 && val !=0){
        cout << " vc n pode atribuir valores nesta posição " << endl;
        return;
    }
    else if(indice ==-2 && val ==0){
        return;
    }
    else{
        vet[indice] = val;
    }
}


