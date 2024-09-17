#include <iostream>

const int m = 3;

// Função para calcular o produto de uma linha da matriz A pela coluna da matriz B
int multlc(int A[m][m], int B[m][m], int i, int j) {
    int result = 0;
    for (int k = 0; k < m; ++k) {
        result += A[i][k] * B[k][j];
    }
    return result;
}

// Função para calcular o produto das matrizes A e B e armazenar o resultado em R
void calcularProdutoMatrizes(int A[m][m], int B[m][m], int R[m][m]) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            R[i][j] = multlc(A, B, i, j);
        }
    }
}

int main() {
    int A[m][m], B[m][m], R[m][m];

    // Leitura das matrizes A e B
    std::cout << "Digite os elementos da matriz A:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> A[i][j];
        }
    }

    std::cout << "Digite os elementos da matriz B:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cin >> B[i][j];
        }
    }

    // Chama a função para calcular o produto e armazenar em R
    calcularProdutoMatrizes(A, B, R);

    // Imprime a matriz resultante R
    std::cout << "A x B = " << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < m; ++j) {
            std::cout << R[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
