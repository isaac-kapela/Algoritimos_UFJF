#include <iostream>

// Função para calcular o traço de uma matriz 2x2
int calcularTraco(int matriz[2][2]) {
    // O traço é a soma dos elementos da diagonal principal
    return matriz[0][0] + matriz[1][1];
}

int main() {
    int matriz[2][2];

    // Leitura da matriz 2x2
   // std::cout << "Digite os elementos da matriz 2x2:" << std::endl;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cin >> matriz[i][j];
        }
    }

    // Chama a função para calcular o traço e imprime o resultado
    std::cout  << calcularTraco(matriz) << std::endl;

    return 0;
}
