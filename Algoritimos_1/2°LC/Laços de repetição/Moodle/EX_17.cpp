#include <iostream>
#include <iomanip>
using namespace std;

void monitorarDeslocamentos(double minEsperado, double maxEsperado) {
    double valor;
    int contagemForaFaixa = 0;
    double somaForaFaixa = 0.0;

    while (true) {
        cout << "Digite o valor da medida (negativo ou zero para encerrar): ";
        cin >> valor;
        if (valor <= 0) {
            break;
        }
        if (valor < minEsperado || valor > maxEsperado) {
            contagemForaFaixa++;
            somaForaFaixa += valor;
        }
    }

    cout << "Quantidade de valores fora da faixa: " << contagemForaFaixa << endl;
    cout << fixed << setprecision(2);
    cout << "Soma dos valores fora da faixa: " << somaForaFaixa << endl;
}

int main() {
    double minEsperado, maxEsperado;
    cout << "Digite o valor mínimo esperado: ";
    cin >> minEsperado;
    cout << "Digite o valor máximo esperado: ";
    cin >> maxEsperado;

    monitorarDeslocamentos(minEsperado, maxEsperado);

    return 0;
}