#include <iostream>
#include "Jogador.h"
#include "Equipe.h"

using namespace std;

int main()
{
    string nome;
    int gols;
    cout << " nome: " << endl;
    cin>> nome;
    cout << " quant gols: " << endl;
    cin >> gols;
    Jogador a(nome);
    a. setGols(gols);
    cout << " nome: " <<  a.getNome() << endl;
    cout << " gols: " <<  a.getGols() << endl;

    return 0;
}
