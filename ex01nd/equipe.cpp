
#include <string>
using namespace std;
#include "Equipe.h"
#include <iostream>

Equipe::Equipe(){
    n =0;
}

Equipe:: ~Equipe(){
    for(int i =0; i< n; i++){
        delete jogadores[i];
    }
}

void Equipe::novoJogador(){
    jogadores[n] = new Jogador(nome);
    jogadores[n]-> new Jogador(gols);
}
