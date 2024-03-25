
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int tamanho = 7;
    int vetor[tamanho];

    // Leitura dos valores do vetor
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    // Substituição dos múltiplos de 3 por 0
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 3 == 0) {
            vetor[i] = 0;
        }
    }

    // Impressão do vetor modificado
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << endl;
    }

    return 0;
}
