#include "Jogador.h"
#include <iomanip>
#include <iostream>
using namespace std;

Jogador::Jogador(string nome){
    nome = nomeJogador ;
    golMarcados = 0;

}
Jogador::~Jogador(){

}

string Jogador::getNome(){
        return nomeJogador;
}

int Jogador::getGols(){
    return golMarcados;
}

void Jogador::setGols(int val){
        golMarcados = val;
}
