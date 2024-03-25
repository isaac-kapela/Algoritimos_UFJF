#include <iostream>
#include <string>

// Função para inverter a ordem dos caracteres na string
std::string inverterString(const std::string& str) {
    return std::string(str.rbegin(), str.rend());
}

int main() {
    std::string inputString;

    // Solicita ao usuário uma string de até 80 caracteres
  //  std::cout << "Digite uma string de até 80 caracteres: ";
    std::getline(std::cin, inputString);

    // Chama a função para inverter a ordem dos caracteres
    std::string resultado = inverterString(inputString);

    // Imprime o resultado obtido
    std::cout << resultado << std::endl;

    return 0;
}
