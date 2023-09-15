#include <iostream>
#include <iomanip>
using namespace std;

// Função para calcular o valor da multa
void calcularMulta(float velocidadeMaxima, float velocidadeMotorista) {
    // Calcular a diferença entre as velocidades
    float diferenca = velocidadeMotorista - velocidadeMaxima;

    // Verificar o tipo de infração com base na diferença
    if (diferenca <= 0) {
        cout << "Nao ha multa a pagar" << endl;
    } else if (diferenca <= 0.2 * velocidadeMaxima) {
        float valorMulta = diferenca * 5;
        cout << fixed << setprecision(2) << "Velocidade superior a maxima permitida em ate 20%\nMulta a pagar: R$" << valorMulta << endl;
    } else if (diferenca <= 0.5 * velocidadeMaxima) {
        float valorMulta = diferenca * 20;
        cout << fixed << setprecision(2) << "Velocidade superior a maxima permitida em mais de 20% ate 50%\nMulta a pagar: R$" << valorMulta << endl;
    } else {
        float valorMulta = diferenca * 40;
        cout << fixed << setprecision(2) << "Velocidade superior a maxima permitida em mais de 50%\nMulta a pagar: R$" << valorMulta << endl;
    }
}

int main() {
    float velocidadeMaxima, velocidadeMotorista;

    cout << "Informe a velocidade maxima permitida: ";
    cin >> velocidadeMaxima;
    cout << "Informe a velocidade registrada pelo dispositivo de fiscalizacao: ";
    cin >> velocidadeMotorista;

    calcularMulta(velocidadeMaxima, velocidadeMotorista);

    return 0;
}
