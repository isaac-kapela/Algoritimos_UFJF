#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Definição da estrutura Ponto
struct Ponto {
    double x;
    double y;
};


double calcularDistancia(const Ponto& ponto1, const Ponto& ponto2) {
    return sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
}

int main() {
    const int N = 10; 

    
    Ponto pontos[N];

    // Leitura dos dados dos pontos
    for (int i = 0; i < N; ++i) {
        cout << "Digite as coordenadas do ponto " << i + 1 << " (x y): ";
        cin >> pontos[i].x >> pontos[i].y;
    }

    
    double maiorDistancia = 0.0;
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            double distancia = calcularDistancia(pontos[i], pontos[j]);
            if (distancia > maiorDistancia) {
                maiorDistancia = distancia;
            }
        }
    }

    
    cout << "A maior distância entre os pontos é: " << fixed << setprecision(2) << sqrt(maiorDistancia) << endl;

    return 0;
}
