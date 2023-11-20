#include <iostream>
#include <string>
#include <limits>  // Inclua a biblioteca limits para corrigir o erro

// Função que completa a string strA com os caracteres de strB até o tamanho máximo t
void completarString(std::string& strA, const std::string& strB, int t) {
    // Verifica se a string strA já atingiu ou ultrapassou o tamanho máximo
    if (strA.length() >= static_cast<unsigned int>(t)) {  // Corrige a comparação de tipos
        return;
    }

    // Calcula quantos caracteres de strB podem ser adicionados a strA sem ultrapassar o tamanho máximo
    int caracteresRestantes = t - static_cast<int>(strA.length());  // Corrige a conversão de tipos
    int caracteresAdicionados = std::min(caracteresRestantes, static_cast<int>(strB.length()));

    // Adiciona os caracteres de strB a strA
    strA += strB.substr(0, caracteresAdicionados);
}

int main() {
    int tamanhoMaximo;
    
    // Solicita ao usuário o tamanho máximo das strings
   // std::cout << "Informe o tamanho máximo das strings: ";
    std::cin >> tamanhoMaximo;

    // Limpa o buffer de entrada corretamente
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Solicita ao usuário as duas strings
    std::string strA, strB;

   // std::cout << "Informe a primeira string: ";
    std::getline(std::cin, strA);

   // std::cout << "Informe a segunda string: ";
    std::getline(std::cin, strB);

    // Chama a função para completar a string e obtém o resultado
    completarString(strA, strB, tamanhoMaximo);

    // Exibe o resultado
    std::cout << strA << "\n";

    return 0;
}
