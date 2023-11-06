#include <iostream>

int main() {
    int vetor[10];

    // Lê os elementos do vetor
    for (int i = 0; i < 10; i++) {
        std::cout  << i + 1 << ": ";
        std::cin >> vetor[i];
    }

    // Imprime os elementos ímpares
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            std::cout << vetor[i] << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
