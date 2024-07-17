#include <iostream>
#include <iomanip>
#include <limits> // Adicionando o cabeçalho necessário

void realizarOperacao(double num1, double num2, int codigo) {
    switch (codigo) {
        case 1:
            std::cout << "Resultado da soma: " << std::fixed << std::setprecision(2) << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Resultado da multiplicação: " << std::fixed << std::setprecision(2) << num1 * num2 << std::endl;
            break;
        case 3:
            if (num2 != 0) {
                std::cout << "Resultado da divisão: " << std::fixed << std::setprecision(2) << num1 / num2 << std::endl;
            } else {
               std::cout << "Divisão por zero!" << std::endl;
            }
            break;
        default:
            std::cout << "Código inválido!" << std::endl;
            break;
    }
}

int main() {
    double num1, num2;
    int codigo;
    char continuar;

    do {
       // std::cout << "Digite o primeiro número real: ";
        std::cin >> num1;
       // std::cout << "Digite o segundo número real: ";
        std::cin >> num2;
       // std::cout << "Digite o código da operação (1: soma, 2: multiplicação, 3: divisão): ";
        std::cin >> codigo;

        realizarOperacao(num1, num2, codigo);

        //std::cout << "Deseja realizar outra operação? (s/n): ";
        std::cin >> continuar;

        // Limpa o buffer de entrada para evitar leituras repetidas
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
