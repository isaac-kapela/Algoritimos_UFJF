#include <iostream>
using namespace std;

// Função para calcular o valor da entrega
void calcularValorEntrega(int limite_caixas, int quantidade_produtos) {
    int caixas_enviadas = 0;
    int valor_total = 0;

    // Loop para calcular o número de caixas a serem enviadas
    while (quantidade_produtos > 0) {
        if (quantidade_produtos >= limite_caixas) {
            caixas_enviadas++;
            quantidade_produtos -= limite_caixas;
        } else {
            caixas_enviadas++;
            quantidade_produtos = 0;
        }
    }

    // Calcular o valor total da entrega
    valor_total = caixas_enviadas * 45;

    // Verificar se o pedido foi reduzido
    if (caixas_enviadas < limite_caixas) {
        cout << "Valor da entrega: R$ " << valor_total << ".00 (" 
             << caixas_enviadas << " Caixas - Pedido reduzido)" << endl;
    } else {
        cout << "Valor da entrega: R$ " << valor_total << ".00 (" 
             << caixas_enviadas << " Caixas)" << endl;
    }
}

int main() {
    int limite_caixas;
    
    // Passo 1: Ler a quantidade limite de caixas
    cout << "Digite a quantidade limite de caixas: ";
    cin >> limite_caixas;

    while (true) {
        int quantidade_produtos;
        
        // Passo 2: Ler a quantidade de produtos (ou -1 para sair)
        cout << "Digite a quantidade de produtos (ou -1 para sair): ";
        cin >> quantidade_produtos;

        if (quantidade_produtos == -1) {
            break; // Encerra o loop quando for lido -1
        }

        // Passo 3: Chama a função para calcular o valor da entrega
        calcularValorEntrega(limite_caixas, quantidade_produtos);
    }

    return 0;
}
