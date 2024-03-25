#include <iostream>
#include <string>

// Função que decodifica a mensagem utilizando a Cifra de César
std::string decodificarCifraCesar(const std::string& mensagem, int deslocamento) {
    std::string decodificada = mensagem;

    for (char& c : decodificada) {
        if (std::isalpha(c)) {
            char base = (c >= 'a') ? 'a' : 'A';
            c = (c - base - deslocamento + 26) % 26 + base;
        }
    }

    return decodificada;
}

int main() {
    int casos;
    std::cin >> casos;

    for (int i = 0; i < casos; ++i) {
        std::string mensagem;
        int deslocamento;

        // Leitura da mensagem e do deslocamento
        std::cin >> mensagem >> deslocamento;

        // Chama a função para decodificar a mensagem
        std::string decodificada = decodificarCifraCesar(mensagem, deslocamento);

        // Imprime o resultado
        std::cout << decodificada << std::endl;
    }

    return 0;
}
