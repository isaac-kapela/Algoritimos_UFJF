#include <iostream>
#include <string>

// Função que imprime a string sem espaços em branco
void imprimirSemEspacos(const std::string& str) {
    for (char c : str) {
        if (c != ' ') {
            std::cout << c;
        }
    }
}

int main() {
    // Solicita ao usuário uma string de até 50 caracteres
    std::string inputString;
   // std::cout << "Digite uma string de até 50 caracteres: ";
    std::getline(std::cin, inputString);

    // Chama a função para imprimir a string sem espaços
    imprimirSemEspacos(inputString);

    return 0;
}
