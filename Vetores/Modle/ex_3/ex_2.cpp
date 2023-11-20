#include <iostream>
#include <string>

// Função que substitui caracteres 'a' por 'b' em uma string e retorna a quantidade modificada
int substituirCaracteres(std::string& str) {
    int caracteresModificados = 0;
    for (char& c : str) {
        if (c == 'a') {
            c = 'b';
            ++caracteresModificados;
        }
    }
    return caracteresModificados;
}

int main() {
    // Solicita ao usuário uma string
    std::string inputString;
   // std::cout << "Digite uma string: ";
    std::getline(std::cin, inputString);

    // Chama a função para substituir caracteres e obtém a quantidade modificada
    int modificados = substituirCaracteres(inputString);

    // Exibe a string modificada e a quantidade de caracteres modificados
    std::cout <<  inputString << "\n";
    std::cout << "Caracteres Modificados: " << modificados << "\n";

    return 0;
}
