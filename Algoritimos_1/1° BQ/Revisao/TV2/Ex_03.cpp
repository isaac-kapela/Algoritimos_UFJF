#include <iostream>
#include <iomanip>

using namespace std;

// Função para contar e somar valores fora da faixa
void monitorarDeslocamento(double valorMinimo, double valorMaximo) {
    double medida;
    int quantidadeForaDaFaixa = 0;
    double somaForaDaFaixa = 0.0;

    while (true) {
       // cout << "Entre com o valor da medida (0 ou negativo para encerrar): ";
        cin >> medida;

        if (medida <= 0) {
            break;
        }

        if (medida < valorMinimo || medida > valorMaximo) {
            quantidadeForaDaFaixa++;
            somaForaDaFaixa += medida;
        }
    }

    cout << "Quantidade de valores fora da faixa: " << quantidadeForaDaFaixa << endl;
    cout << fixed << setprecision(2);
    cout << "Soma dos valores fora da faixa: " << somaForaDaFaixa << endl;
}

int main() {
    double valorMinimo, valorMaximo;

   // cout << "Entre com o valor mínimo esperado: ";
    cin >> valorMinimo;

   // cout << "Entre com o valor máximo esperado: ";
    cin >> valorMaximo;

    monitorarDeslocamento(valorMinimo, valorMaximo);

    return 0;
}
