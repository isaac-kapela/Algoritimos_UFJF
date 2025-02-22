#include <string>
using namespace std;
#include "Jogador.h"
#include <iostream>


Jogador::Jogador(string nome){
    nomeJogador = nome;
}
Jogador::~Jogador(){
    cout << "destruindo jogador" << endl;
}


void Jogador::setGols(int val){
    cout << " zerando a quant de gols" << endl;
    golsMarcados = val;

}

string Jogador::getNome(){
    return nomeJogador;
}

int Jogador::getGols(){
    return golsMarcados;
}



