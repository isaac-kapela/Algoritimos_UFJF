#include <iostream>
using namespace std;

// Função que calcula o valor a ser pago por um cliente
double calcularValor(double preco, int numInteiros, int numMeias, int formaPagamento) {
    double valorTotal = (numInteiros * preco) + (numMeias * (preco / 2.0));

    if (formaPagamento == 0) {
        valorTotal -= (valorTotal * 0.05); // Aplicando desconto de 5% para pagamento em dinheiro
    }

    return valorTotal;
}

int main() {
    double precoIngresso;
    
    cout << "Digite o preço do ingresso: ";
    cin >> precoIngresso;
    
    while (true) {
        int numInteiros, numMeias, formaPagamento;
        
        cout << "Digite o número de ingressos inteiros, o número de meia-entradas e a forma de pagamento (0 para dinheiro, 1 para cartão): ";
        cin >> numInteiros >> numMeias >> formaPagamento;
        
        if (numInteiros == 0) {
            break; // Sai do loop quando o número de ingressos for zero
        }
        
        double valorPago = calcularValor(precoIngresso, numInteiros, numMeias, formaPagamento);
        
        cout << "Valor a ser pago pelo cliente: " << valorPago << endl;
    }
    
    return 0;
}
