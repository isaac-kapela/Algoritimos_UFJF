#include <string>
#include "Equipe.h"
#include "Jogador.h"

Equipe::Equipe()
{
    n=0;
}

Equipe::~Equipe()
{
    for(int i=0;i<n;i++)
        delete jogadores[i]; // Libera memoria de cada jogador
}
void Equipe::novoJogador(string nome, int gols)
{
    if(n>=MAX)
        return;
    else{
        jogadores[n]=new Jogador(nome);
        jogadores[n]->setGols(gols);
        n++;
    }
}

string Equipe::nomeArtilheiro()
{
    int maxGols = jogadores[0]->getGols();
    string nomeArt = jogadores[0]->getNome();
    for(int i=1;i<n;i++){
        if(maxGols<jogadores[i]->getGols()){
            maxGols=jogadores[i]->getGols();
            nomeArt = jogadores[i]->getNome();
        }
    }
        return nomeArt;
}
