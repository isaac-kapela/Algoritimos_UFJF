#include <iostream>

int main() {
    const int tamanho = 7;
    int vetor[tamanho];

    // Leitura dos valores do vetor
    for (int i = 0; i < tamanho; i++) {
        std::cout << "Digite o elemento " << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Substituição dos múltiplos de 3 por 0
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 3 == 0) {
            vetor[i] = 0;
        }
    }

    // Impressão do vetor modificado
    std::cout << "Vetor modificado:" << std::endl;
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << std::endl;
    }

    return 0;
}
