#ifndef EQUIPE_H_INCLUDED
#define EQUIPE_H_INCLUDED

#include "Jogador.h"
#define MAX 5
class Equipe
{
public:
Equipe();
~Equipe();
void novoJogador(string nome, int gols);
string nomeArtilheiro();
void imprimeJogadores();
private:
int n;
Jogador *jogadores[MAX_JOG];
};

#endif // EQUIPE_H_INCLUDED
