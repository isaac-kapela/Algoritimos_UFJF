#include <iostream>
using namespace std;

#define MAX_VETOR 10

void criaVetor(int valorInicial) {
    int vet[MAX_VETOR];
    vet[0] = valorInicial;

    for (int i = 1; i < MAX_VETOR; i++) {
        vet[i] = vet[i-1] * 2;
    }

    for (int i = 0; i < MAX_VETOR; i++) {
        cout << vet[i] << endl;
    }
}

int main() {
    int valorInicial;

    cout << "Digite o valor inicial: ";
    cin >> valorInicial;

    criaVetor(valorInicial);

    return 0;
}