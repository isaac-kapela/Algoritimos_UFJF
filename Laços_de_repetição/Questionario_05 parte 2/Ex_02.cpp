#include <iostream>

// Função para calcular a soma de números ímpares no intervalo aberto entre X e Y
int soma_impares(int X, int Y) {
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;  // Troca X e Y se X for maior que Y
    }
    int soma = 0;
    for (int i = X + 1; i < Y; ++i) {  // Percorre do número após X até o número antes de Y
        if (i % 2 != 0) {  // Verifica se o número é ímpar
            soma += i;
        }
    }
    return soma;
}

int main() {
    int X, Y;
    //std::cout << "Informe o primeiro número (X): ";
    std::cin >> X;
   // std::cout << "Informe o segundo número (Y): ";
    std::cin >> Y;
    int resultado = soma_impares(X, Y);
    
    std::cout << "A soma e " << resultado << std::endl;
    
    return 0;
}
