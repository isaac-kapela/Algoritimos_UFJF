#include "Jogador.h"
#include <string>

Jogador::Jogador(string nome)
{
    nomeJogador = nome;
    golsMarcados = 0;
}
Jogador::~Jogador()
{

}


string Jogador::getNome()
{
    return nomeJogador;
}

int Jogador::getGols()
{
    return golsMarcados;
}

void Jogador::setGols(int val)
{
    if(val<0)
        exit(1); // Numero de Gols Invalido
    else
        golsMarcados=val;
}

