#include "DiagoSecundaria.h"
#include <iostream>
using namespace std;

Secundaria::Secundaria(int ordem){
    int tam;
    n = ordem;
    tam = n;
    vet = new int [tam];
}

Secundaria::~Secundaria(){
    delete [] vet;
}

bool Secundaria::ehQuadrada(){
    return true;
}

int Secundaria::detInd(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= n){
        return -1;
    }
    else if(i + j == n - 1){
        return i;
    }
    else{
        return -2;
    }
}

int Secundaria::get(int i, int j){
    int k = detInd(i, j);
    if(k == -1){
        cout << "Erro: índices inválidos." << endl;
        exit(1);
    }
    else if(k == -2){
        return 0;
    }
    else {
        return vet[k];
    }
}

void Secundaria::set(int i, int j, int val){
    int k = detInd(i, j);
    if(k == -1){
        cout << "Erro: Índice inválido." << endl;
        exit(1);
    }
    else if(k == -2){
    return; // cout << "Erro: você não pode alterar valores nesta posição." << endl;
    }
    else{
        vet[k] = val;
    }
}

void Secundaria::preenche(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            set(i, j, i + 1);
        }
    }
}

void Secundaria::imprime(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << get(i, j) << " ";
        }
        cout << endl;
    }
}
