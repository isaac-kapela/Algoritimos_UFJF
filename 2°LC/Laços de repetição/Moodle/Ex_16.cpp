#include <iostream>
using namespace std;

int main() {
    long double valores[10];
    long double maior, menor;
    int posMaior = 0, posMenor = 0;

    for (int i = 0; i < 10; i++) {
      //  cout << "Digite o " << i + 1 << "o valor: ";
        cin >> valores[i];
    }

    maior = menor = valores[0];

    for (int i = 1; i < 10; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
            posMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posMenor = i;
        }
    }

    cout << "O " << posMaior + 1 << "o elemento é o maior." << endl;
    cout << "O " << posMenor + 1 << "o elemento é o menor." << endl;

    return 0;
}