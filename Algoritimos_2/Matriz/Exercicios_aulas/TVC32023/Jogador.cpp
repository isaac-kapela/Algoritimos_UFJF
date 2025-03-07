#include <iostream>
#include "Jogador.h"
using namespace std;


Jogador::Jogador(string nome){
    golsMarcados =0;
    nomeJogador = nome;
}

string Jogador::getNome(){
    return nomeJogador;
}
int Jogador::getGols(){
    return golsMarcados;
}


void Jogador::setGols(int val){
    if(val >= 0){
        golsMarcados = val;
    }
    else{
        cout << " numeros de gols invalidos " << endl;
        exit(1);
    }
}
