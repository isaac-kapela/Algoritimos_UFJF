#include <iostream>
using namespace std;

int main() {
    int vetor1[5], vetor2[5], vetor3[10];

    // Preencher vetor1 e vetor2
    for (int i = 0; i < 5; i++) {
        cin >> vetor1[i] >> vetor2[i];
    }

    int i = 0, j = 0;

    // Combinação de elementos de vetor1 e vetor2 em vetor3 em ordem crescente
    for (int idx = 0; idx < 10; idx++) {
        if (i < 5 && (j == 5 || vetor1[i] < vetor2[j])) {
            vetor3[idx] = vetor1[i++];
        } else {
            vetor3[idx] = vetor2[j++];
        }
    }

    // Imprimir vetor3
    for (int idx = 0; idx < 10; idx++) {
        cout << vetor3[idx] << " ";
    }

    return 0;
}
