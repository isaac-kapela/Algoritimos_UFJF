#include "Matriz2D.h"
#include <iostream>
using namespace std;

Matriz2D::Matriz2D(int linha, int coluna){
    numLinhas = linha;
    numColunas = coluna;
    mat = new int*[numLinhas];
    for(int i =0; i < numLinhas; i++){
        mat[i] = new int[numColunas];
    }
}
Matriz2D::~Matriz2D(){
    for(int i =0; i < numLinhas; i++){
        delete [] mat[i];
        delete [] mat;
    }
}

bool Matriz2D::verifica(int i, int j){
    if(i>= 0 && i < numLinhas && j >= 0 && j < numColunas){
        return true;
    }
    else{
        return false;
    }
}


int Matriz2D::get(int i, int j){
    if(!verifica(i,j)){
        cout << " indice invalido!" << endl;
        exit(1);
    }
    else{
        return mat[i][j];
    }
}

void Matriz2D::set(int i, int j, int val){
        if(!verifica(i,j)){
            cout << " indice invalidos! " << endl;
            exit(1);
        }
        else{
            mat[i][j] = val;
        }

}

void Matriz2D::preencheMat(){
    for(int i =0; i < numLinhas; i++){
        for(int j =0; j < numColunas; j++){
            mat[i][j] = i+j+1;
        }
    }
}

void Matriz2D::imprimeMat(){
    for(int i =0; i < numLinhas; i++){
        for(int j =0; j < numColunas; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
