#include <iostream>
#include "DiagoAnti.h"
using namespace std;

DiagoAnti::DiagoAnti(int ordem) {
    if(ordem <2){
        cout << "ordem invalida" << endl;
        exit(1);
    }
    else{


    n = ordem;
    int tam = (3 * n) - 2;
    vet = new int[tam];

    for (int i = 0; i < tam; i++) {
        vet[i] = 0;
    }
    }
}

DiagoAnti::~DiagoAnti() {
    delete[] vet;
}

int DiagoAnti::detInd(int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= n) {
        return -1;
    }

    int k;
    if (i == j) {
        k = i;
    } else if (i-j==-1) {
        k = n-i+j;
    } else if (i-j==1) {
        k = (2 * n - 1) + i;
    } else {
        return -2;
    }

    return k;
}

int DiagoAnti::get(int i, int j) {
    int k = detInd(i, j);

    if (k == -1) {
        cout << "Índices inválidos!" << endl;
        exit(1);
    }

    if (k == -2) {
        if(i==j+1){
            return -get(j,i);
        }
        else{
            return 0;
        }
    }

    return vet[k];
}

void DiagoAnti::set(int i, int j, int val) {
    int k = detInd(i, j);

    if (k == -1) {
        cout << "Índices inválidos!" << endl;
        return;
    }

    if (k == -2 && val != 0) {
        cout << "Tentando atribuir valor não zero em posição invalida!" << endl;
        return;
    }

    if (k != -2) {
        vet[k] = val;
    }
}

void DiagoAnti::preencheVetor(){
    int tam = (3 * n) - 2;
    for(int i =0; i < tam; i++){
        vet[i] = i+1;
    }
}

void DiagoAnti::imprimeVet(){
    int tam =(3*n)-2;
    for(int i =0; i < tam; i++){
        cout << vet[i]<< " ";
    }
}

