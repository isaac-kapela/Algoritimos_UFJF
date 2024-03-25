#include <iostream>
#include <string>

// Função que copia os k primeiros caracteres de strB para strA de forma invertida
void copiarInvertido(std::string& strA, const std::string& strB, int k) {
    int tamanhoStrB = strB.length();

    // Se k for maior que o tamanho da string, todo o conteúdo de strB é invertido
    k = std::min(k, tamanhoStrB);

    // Inicializa strA com k caracteres de espaço em branco
    strA.assign(k, ' ');

    // Copia os k primeiros caracteres de strB para strA de forma invertida
    for (int i = 0; i < k; ++i) {
        strA[i] = strB[k - i - 1];
    }
}

int main() {
    std::string strA, strB;
    int k;

    // Solicita ao usuário a string strB e o valor de k
   // std::cout << "Digite a string strB: ";
    std::cin >> strB;

   // std::cout << "Digite um valor inteiro k: ";
    std::cin >> k;

    // Chama a função para copiar os k primeiros caracteres invertidos
    copiarInvertido(strA, strB, k);

    // Imprime o conteúdo de strA
    std::cout << strA << std::endl;

    return 0;
}
