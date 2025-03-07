#include "Equipe.h"
#include <iostream>
using namespace std;

Equipe::Equipe()
{
    n = 0;
}

Equipe::~Equipe()
{
    for (int i = 0; i < n; i++) {
        delete jogadores[i];
    }
}

void Equipe::novoJogador(string nome, int gols)
{
    if (n < 5) {
        jogadores[n] = new Jogador(nome);
        jogadores[n]->setGols(gols);
        n++;
    } else {
        cout << "Número máximo de jogadores atingido!" << endl;
    }
}

string Equipe::nomeArtilheiro()
{
    if (n == 0) {
        return "Sem artilheiro";
    }

    string artilheiro = jogadores[0]->getNome();
    int maxGols = jogadores[0]->getGols();
    for (int i = 1; i < n; i++) {
        if (jogadores[i]->getGols() > maxGols) {
            maxGols = jogadores[i]->getGols();
            artilheiro = jogadores[i]->getNome();
        }
    }
    return artilheiro;
}
