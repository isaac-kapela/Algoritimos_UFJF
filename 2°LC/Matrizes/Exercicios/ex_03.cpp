#include <iostream>
#include <iomanip>
#define TAM 3

using namespace std;

void multiplicaVetorMatriz(float V[], float M[][TAM]) {
    float resultado[TAM] = {0};

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            resultado[i] += V[j] * M[j][i];
        }
    }

    for (int i = 0; i < TAM; i++) {
        V[i] = resultado[i];
    }
}

int main() {
    float V[TAM];
    float M[TAM][TAM];

    for (int i = 0; i < TAM; i++) {
        cin >> V[i];
    }

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            cin >> M[i][j];
        }
    }

    multiplicaVetorMatriz(V, M);

    cout << "Resultado = [ ";
    for (int i = 0; i < TAM; i++) {
        cout << fixed << setprecision(1) << V[i] << " ";
    }
    cout << "]" << endl;

    return 0;
}