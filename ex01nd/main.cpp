#include <iostream>
#include "Jogador.h"
using namespace std;

int main()
{
    string nome;
    int quantGol;;
    cout << "digite o nome do jogador: ";
    cin>> nome;
    cout << "digite a quant gols: ";
    cin>> quantGol;
    Jogador a(nome);
    a.setGols(quantGol);
    cout << "nome: "<< a.getNome() << endl;

    cout << "Quant de gols: " << a.getGols() << endl;
    return 0;
}
