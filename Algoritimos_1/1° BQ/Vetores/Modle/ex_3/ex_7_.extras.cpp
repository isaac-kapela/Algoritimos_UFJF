#include <iostream>
#include <string>

// Função para inserir um espaço em branco antes de cada letra maiúscula
std::string inserirEspacosMaiusculas(const std::string& str) {
    std::string resultado;
    
    for (char c : str) {
        if (std::isupper(c)) {
            resultado += ' '; // Insere um espaço antes de cada letra maiúscula
        }
        resultado += c;
    }

    return resultado;
}

int main() {
    std::string inputString;

    // Solicita ao usuário uma string de até 200 caracteres
   // std::cout << "Digite uma string de até 200 caracteres: ";
    std::getline(std::cin, inputString);

    // Chama a função para inserir espaços antes de letras maiúsculas
    std::string resultado = inserirEspacosMaiusculas(inputString);

    // Imprime o resultado transformado
    std::cout << resultado << std::endl;

    return 0;
}
