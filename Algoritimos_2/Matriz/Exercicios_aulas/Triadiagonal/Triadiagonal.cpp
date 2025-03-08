#include "Triadiaginal.h"
#include <iostream>
using namespace std;

Triadiagonal::Triadiagonal(int ordem){
    n = ordem;
    int tam = (3*n)-2;
    vet = new int[tam];
}

Triadiagonal::~Triadiagonal(){
    delete [] vet;
}

int Triadiagonal::dentInd(int i, int j){
    int k;
    if(i<0 || i>=n || j < 0 || j>=n){
        return -1; // indice invalidos
    }
    else if(i==j){
        k=i; // diagoPrincipal
    }
    else if(i<j){
        k =(n-1)+j;// diaGoInferior
    }
    else if(i>j){
        k=(2*n-1)+i; //diagoSuperior
    }
    else{
        return -2; // posições nulas
    }
    return vet[k];
}

int Triadiagonal::get(int i, int j){
    int indice = dentInd(i,j);

    if(indice ==-1){
        cout << "Indice invalidos" << endl;
        exit(1);
    }
    else if(indice ==-2){
        return 0;
    }
    else{
        return vet[indice];
    }
}

void Triadiagonal::set(int i, int j, int val){
    int indice = dentInd(i,j);
    if(indice ==-1){
        cout << "indice invalidos" << endl;
        exit(1);
    }
    else if(indice==-2 || val !=0){
            return 0;
    }
    else if(indice==-2 || indice ==0){
        return;
    }
    else{
        vet[indice] =val;
    }
    return;
}
Triadiagonal* Triadiagonal::CriaCopia(){
    Triadiagonal *nova= new Triadiagonal(n);
    int tam = (3*n)-2;
    for(int i =0; i < tam; i++){
        nova->vet[i] = vet[i];
    }
    return nova;
}
