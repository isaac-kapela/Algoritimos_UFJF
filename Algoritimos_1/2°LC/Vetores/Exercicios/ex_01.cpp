#include <iostream>
using namespace std;

#define MAX_VETOR 10

int buscaValor(int vet[], int tam, int x) {
    for (int i = 0; i < tam; i++) {
        if (vet[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vet[MAX_VETOR], tam, x;

    cin >> tam;

    // if (tam > MAX_VETOR) {
    //     cout << "Tamanho do vetor excede o máximo permitido." << endl;
    //     return 1;
    // }

    for (int i = 0; i < tam; i++) {
        cin >> vet[i];
    }

    cin >> x;

    int posicao = buscaValor(vet, tam, x);

    cout << "Posicao = " << posicao << endl;

    return 0;
}
