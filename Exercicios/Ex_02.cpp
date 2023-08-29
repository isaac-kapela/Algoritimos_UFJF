#include <iostream>
#include <iomanip> // Para formatar a saída com 3 casas decimais
#include <cmath>   // Para usar a função pow

    using namespace std;

// Função para calcular o volume da esfera
double calcularVolumeEsfera(double raio) {
    const double pi = 3.14159;
    return (4.0 / 3.0) * pi * pow(raio, 3);
}

int main() {
    double raio;

    // Leitura do valor do raio
    cin >> raio;

    // Calcula o volume usando a função
    double volume = calcularVolumeEsfera(raio);

    // Configura a saída para mostrar 3 casas decimais após o ponto
    cout << fixed << setprecision(3);

    // Imprime o resultado
    cout << "VOLUME = " << volume << endl;

    return 0;
}
