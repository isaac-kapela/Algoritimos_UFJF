#include <iostream>

const int SIZE = 20;

// Função para encontrar a primeira ocorrência de X na matriz
void encontrarOcorrencia(int matriz[SIZE][SIZE], int X) {
    bool encontrado = false;
    int linhaEncontrada = -1, colunaEncontrada = -1;

    // Percorre a matriz
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            // Verifica se o elemento atual é igual a X
            if (matriz[i][j] == X) {
                encontrado = true;
                linhaEncontrada = i;
                colunaEncontrada = j;
                break; // Encerra o loop ao encontrar a primeira ocorrência
            }
        }
        if (encontrado) {
            break; // Encerra o loop externo ao encontrar a primeira ocorrência
        }
    }

    // Imprime o resultado
    if (encontrado) {
        std::cout << "Linha: " << linhaEncontrada + 1 << " Coluna: " << colunaEncontrada + 1 << std::endl;
    } else {
        std::cout << "nao encontrado" << std::endl;
    }
}

int main() {
    int matriz[SIZE][SIZE];
    int X;

    // Leitura da matriz
    std::cout << "Digite a matriz 20x20:" << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            std::cin >> matriz[i][j];
        }
    }

    // Leitura do valor X
    std::cout << "Digite o valor X: ";
    std::cin >> X;

    // Chama a função para encontrar a ocorrência de X na matriz
    encontrarOcorrencia(matriz, X);

    return 0;
}
