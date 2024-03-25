#include <iostream>
#include <unordered_map>
#include <algorithm>  // Para transformar strings em minúsculas

// Função que conta os votos e exibe o resultado
void contarVotos(int numAlunos) {
    std::unordered_map<std::string, int> votos;

    for (int i = 0; i < numAlunos; ++i) {
        std::string nome;
        std::cin >> nome;

        // Transforma o nome para minúsculas
        std::transform(nome.begin(), nome.end(), nome.begin(), ::tolower);

        // Verifica se o nome é de um candidato válido
        if (nome == "ana" || nome == "ari" || nome == "eva" || nome == "ivan") {
            votos[nome]++;
        } else {
            // Voto nulo
            votos["nulos"]++;
        }
    }

    // Exibe o resultado
    std::cout << "Ana: " << votos["ana"] << " voto(s)\n";
    std::cout << "Ari: " << votos["ari"] << " voto(s)\n";
    std::cout << "Eva: " << votos["eva"] << " voto(s)\n";
    std::cout << "Ivan: " << votos["ivan"] << " voto(s)\n";
    std::cout << "Nulos: " << votos["nulos"] << " voto(s)\n";
}

int main() {
    int numAlunos;

    // Solicita ao usuário o número de alunos presentes no dia da eleição
   // std::cout << "Informe o número de alunos presentes no dia da eleição: ";
    std::cin >> numAlunos;

    // Chama a função para contar os votos e exibir o resultado
    contarVotos(numAlunos);

    return 0;
}
