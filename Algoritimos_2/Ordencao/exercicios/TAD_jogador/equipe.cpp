#include <string>
using namespace std;
#include "Equipe.h"
#include <iostream>


Equipe::Equipe()
{
    n =0;
}
Equipe::~Equipe()
{
    for(int i =0; i < n; i++)
    {
        delete jogadores[i];
    }
}

void Equipe::novoJogador(string nome, int gols)
{
    if(n>= MAX)
    {
        return
    }

    jogadores[n] = new Jogador(nome, gols);
    n++;

}

    string Equipe::nomeArtilheiro() {
    if (n == 0) {
        return 0;
    }

    string artilheiro = jogadores[0].getNome();
    int maxGols = jogadores[0].getGols();

    for (int i = 1; i < n; i++) {
        if (jogadores[i].getGols() > maxGols) {
            maxGols = jogadores[i].getGols();
            artilheiro = jogadores[i].getNome();
        }
    }
    return artilheiro;
}

