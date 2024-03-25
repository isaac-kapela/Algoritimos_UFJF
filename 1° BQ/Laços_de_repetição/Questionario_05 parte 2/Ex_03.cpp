#include <iostream>
using namespace std;

// Função para calcular a média de n valores reais
double calcularMedia(int n) {
    double soma = 0.0;

    // Loop para ler n valores e calcular a soma
    for (int i = 0; i < n; i++) {
        double valor;
        cin >> valor;
        soma += valor;
    }

    // Calcula a média
    double media = soma / n;
    return media;
}

int main() {
    int n;
    
    // Solicita ao usuário que insira a quantidade de valores
   // cout << "Digite a quantidade de valores: ";
    cin >> n;

    // Verifica se n é válido (maior que zero)
    if (n <= 0) {
        cerr << "A quantidade de valores deve ser maior que zero." << endl;
        return 1; // Encerra o programa com código de erro
    }

    // Chama a função para calcular a média
    double media = calcularMedia(n);

    // Imprime o resultado formatado sem usar cout
    printf("Média dos %d valores: %.2f.\n", n, media);

    return 0;
}
