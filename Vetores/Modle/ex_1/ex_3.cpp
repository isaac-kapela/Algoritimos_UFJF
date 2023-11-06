#include <iostream>

int main() {
    const int tamanho = 12;
    double vetor[tamanho];
    double soma = 0.0;
    int count = 0;

    // Leitura dos valores do vetor
    for (int i = 0; i < tamanho; i++) {
        std::cout << i + 1 ;
        std::cin >> vetor[i];

        if (vetor[i] > 0) {
            soma += vetor[i];
            count++;
        }
    }

    // Cálculo e impressão da média dos valores positivos
    if (count > 0) {
        double media = soma / count;
        std::cout << "Media dos elementos positivos: " << media << std::endl;
    } else {
        std::cout << "Não há elementos positivos no vetor." << std::endl;
    }

    return 0;
}
