#include "Jogador.h"
#include <iomanip>
#include <string>
using namespace std;

Jogador::Jogador(string nome){
    nomeJogador = nome;
    golsMarcados = 0;
}
string Jogador::getNome(){
    return nomeJogador;
}

int Jogador::getGols(){
    return golsMarcados;
}

void Jogador::setGols(int val){
    golsMarcados = val;

}
