#include "Jogador.h"
#include <iomanip>
#include <string>
using namespace std;

int main(){

Jogador joga1;
    string nome;
    cout << "digite o nome do jogador: "<< endl;
    cin>> nome;
    int golsMarcados;
    cout << "digite a quant de gols marcados: " << endl;
    cin >> golsMarcados;

    joga1(nome, golsMarcados);

    cout << joga1.getNome() << endl;
    cout << joga1.getGols() << endl;


return 0;
}
