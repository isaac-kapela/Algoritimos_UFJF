#include <iostream>
using namespace std;

// Função para preencher o vetor e descartar valores repetidos
void preencherVetorSemRepeticao(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int valor;
        std::cout << "Digite um valor para a posicao " << i + 1 << ": ";
        std::cin >> valor;

        // Verifica se o valor já existe no vetor
        bool repetido = false;
        for (int j = 0; j < i; j++) {
            if (vetor[j] == valor) {
                std::cout << "Valor repetido! Digite um outro valor: ";
                i--; // Decrementa i para solicitar um novo valor para a mesma posição
                repetido = true;
                break;
            }
        }

        // Se o valor não for repetido, atribui ao vetor
        if (!repetido) {
            vetor[i] = valor;
        }
    }
}

// Função para reorganizar os elementos do vetor (pares à esquerda, ímpares à direita)
void reorganizarVetor(int vetor[], int tamanho) {
    int *novoVetor = new int[tamanho]; // Criar um novo vetor temporário
    int indicePar = 0;
    int indiceImpar = tamanho - 1;

    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            // Elemento par, coloque à esquerda
            novoVetor[indicePar] = vetor[i];
            indicePar++;
        } else {
            // Elemento ímpar, coloque à direita
            novoVetor[indiceImpar] = vetor[i];
            indiceImpar--;
        }
    }

    // Copiar o novo vetor de volta para o vetor original
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = novoVetor[i];
    }
}

// Função para imprimir o vetor
void imprimirVetor(int vetor[], int tamanho) {
    std::cout << "Vetor: ";
    for (int i = 0; i < tamanho; i++) {
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int tamanho = 5; // Altere o tamanho conforme necessário
    int meuVetor[tamanho];

    // Chamando a função para preencher o vetor sem repetições
    preencherVetorSemRepeticao(meuVetor, tamanho);
    // Imprimindo o vetor após a primeira função
    imprimirVetor(meuVetor, tamanho);

    // Chamando a função para reorganizar o vetor
    reorganizarVetor(meuVetor, tamanho);
    // Imprimindo o vetor após a segunda função
    imprimirVetor(meuVetor, tamanho);

    return 0;
}
