// programa que clacula media

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int tamanho = 12;
    double vetor[tamanho];
    double soma = 0.0;
    int count = 0;

    // Leitura dos valores do vetor
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];

        if (vetor[i] > 0) {
            soma += vetor[i];
            count++;
        }
    }

    // Cálculo e impressão da média dos valores positivos com 2 casas decimais
    if (count > 0) {
        double media = soma / count;
        cout << "Media dos elementos positivos: " << fixed << setprecision(1) << media << endl;
    } else {
        cout << "Media dos elementos positivos: " << fixed << setprecision(1) << "0.00" << endl;
    }

    return 0;
}
