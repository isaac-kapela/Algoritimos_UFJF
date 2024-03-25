#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cctype>

bool isTautogram(const std::string& sentence) {
    std::istringstream iss(sentence);
    std::vector<std::string> words;

    // Divide a sentença em palavras
    std::string word;
    while (iss >> word) {
        words.push_back(word);
    }

    // Converte todas as palavras para minúsculas para facilitar a comparação
    for (auto& w : words) {
        for (char& c : w) {
            c = std::tolower(c);
        }
    }

    // Verifica se todas as palavras começam com a mesma letra
    char firstLetter = words[0][0];
    for (const auto& w : words) {
        if (w[0] != firstLetter) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string sentence;

    while (true) {
        std::getline(std::cin, sentence);

        if (sentence == "*") {
            break; // Fim da entrada
        }

        // Verifica se a sentença é um tautograma e imprime o resultado
        char result = isTautogram(sentence) ? 'Y' : 'N';
        std::cout << result << std::endl;
    }

    return 0;
}
