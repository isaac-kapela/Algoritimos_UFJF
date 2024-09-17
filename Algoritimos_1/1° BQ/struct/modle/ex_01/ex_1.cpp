#include <iostream>
#include <vector>
#include <string>

// Estrutura para representar os dados
struct Pessoa {
    std::string nome;
    std::string endereco;
    std::string numero;
    std::string bairro;
    std::string complemento;
    std::string cep;
    std::string cidade;
    std::string uf;
    std::string tel1;
    std::string tel2;
};

int main() {
    // Vetor para armazenar os dados das pessoas
    std::vector<Pessoa> pessoas;

    // Loop para preencher os dados da estrutura
    for (int i = 0; i < 3; ++i) { // Modificado para 3 entradas conforme o exemplo
        Pessoa pessoa;
        std::getline(std::cin >> std::ws, pessoa.nome);
        std::getline(std::cin >> std::ws, pessoa.endereco);
        std::getline(std::cin >> std::ws, pessoa.numero);
        std::getline(std::cin >> std::ws, pessoa.bairro);
        std::getline(std::cin >> std::ws, pessoa.complemento);
        std::getline(std::cin >> std::ws, pessoa.cep);
        std::getline(std::cin >> std::ws, pessoa.cidade);
        std::getline(std::cin >> std::ws, pessoa.uf);
        std::getline(std::cin >> std::ws, pessoa.tel1);
        std::getline(std::cin >> std::ws, pessoa.tel2);

        // Adiciona a pessoa ao vetor
        pessoas.push_back(pessoa);
    }

    // Loop para imprimir os dados
    for (const auto& pessoa : pessoas) {
        std::cout << pessoa.nome << std::endl;
        std::cout << pessoa.endereco << std::endl;
        std::cout << pessoa.numero << std::endl;
        std::cout << pessoa.bairro << std::endl;
        std::cout << pessoa.complemento << std::endl;
        std::cout << pessoa.cep << std::endl;
        std::cout << pessoa.cidade << std::endl;
        std::cout << pessoa.uf << std::endl;
        std::cout << pessoa.tel1 << std::endl;
        std::cout << pessoa.tel2 << std::endl;
    }

    return 0;
}
