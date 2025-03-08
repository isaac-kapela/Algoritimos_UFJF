#include "Listra.h"
#include <iostream>
using namespace std;

Listra::Listra(int m, int n){
    if(m < 1 || n <2){
        cout << " posic��es invalidas" << endl;
        exit(1);
    }
    nl = m;
    nc = n;
    int tam = n/2*m;
    vet = new int[tam];
}

Listra::~Listra(){
    delete [] vet;
}

bool Listra::ehQuadrada(){
    if(nl == nc){
        return true;
    }
    else{
        return false;
    }
}

int Listra::detInd(int, int j){
    if(i <0 || i>=n|| j<0 || j>=n ){
        return -1; // posi��es invalidas
    }
    else if(j%2==0){
        return -2; // elementos nulos
    }

    else{
        return (m*(j/2))+i;
    }
}

int Listra::get(int i, int j){
    int k = detInd(i,j);
    if(k == -1){
        cout << "Posi��es invalidas"<< endl;
        exit(1);
    }
    else if(k==-2){
        return 0;
    }
    else{
       return vet[k];
    }
}
void Listra::set(int i, int k, int val){
    int k = detInd(i,j);
    if(k==-1){
        cout << " indice invalido" << endl;
        exit(1);
    }   
    else if(k==-2 || val !=0){
        cout << "voc� n�o pode atribuir valores nessa posi��o" << endl;
    }
    else if(k==-2 && val ==0){
        return;
    }
    else{
        vet[k] = val;
    }
    return;
}

Listra* Listra::criaCopia(){
    Listra *nova = new Listra(nl, nc);
    int tam = n/2*m;
    for(int i =0; i < tam; i++){
        nova->vet[i] = vet[i];
    }
    return nova;
}

