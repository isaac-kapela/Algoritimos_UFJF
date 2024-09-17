#include <stdio.h>
#include <math.h>

// Estrutura para armazenar um ponto com coordenadas x e y
struct Ponto {
    double x;
    double y;
};

// Função para calcular a distância entre dois pontos
double calcularDistancia(struct Ponto ponto1, struct Ponto ponto2) {
    return sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
}

int main() {
    // Vetor para armazenar os 10 pontos
    struct Ponto pontos[10];

    // Leitura dos dados dos pontos
    for (int i = 0; i < 10; i++) {
        scanf("%lf %lf", &pontos[i].x, &pontos[i].y);
    }

    // Inicializa a maior distância como zero
    double maiorDistancia = 0.0;

    // Calcula a distância entre todos os pares de pontos
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            double distancia = calcularDistancia(pontos[i], pontos[j]);
            // Atualiza a maior distância se necessário
            if (distancia > maiorDistancia) {
                maiorDistancia = distancia;
            }
        }
    }

    // Imprime a maior distância com duas casas decimais
    printf("%.2lf\n", maiorDistancia);

    return 0;
}
