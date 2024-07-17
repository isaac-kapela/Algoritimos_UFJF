#include <iostream>
using namespace std;

// Função para realizar e imprimir as operações
void operacoes(int n1, int n2) {
    cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
    cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
    cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
    if (n2 != 0) { // Verificação para evitar divisão por zero
        cout << n1 << " / " << n2 << " = " << n1 / n2 << endl;
        cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
    } else {
        cout << "Divisão por zero não é permitida." << endl;
    }
}

int main() {
    int n1, n2;
    char opcao = 's'; // Inicializa a opção como 's' para entrar no loop

    while (opcao == 's' || opcao == 'S') {
        cout << "Digite o primeiro valor inteiro: ";
        cin >> n1;
        cout << "Digite o segundo valor inteiro: ";
        cin >> n2;

        // Chama a função para realizar as operações e imprimir os resultados
        operacoes(n1, n2);

        cout << "Deseja realizar outra operação? (s/n): ";
        cin >> opcao;
    }

    return 0;
}
