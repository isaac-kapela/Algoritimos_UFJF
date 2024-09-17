#include <iostream>
using namespace std;

// Função que conta a quantidade de números ímpares em um intervalo fechado
int NumerosImpares(int n1, int n2) {
    int contador = 0;
    
    int inicio, fim;
    
    // Verifica qual é o limite inferior e superior do intervalo
    if (n1 < n2) {
        inicio = n1;
        fim = n2;
    } else {
        inicio = n2;
        fim = n1;
    }
    
    // Inicializa a variável atual com o limite inferior do intervalo
    int atual = inicio;
    
    while (atual <= fim) {
        if (atual % 2 != 0) {
            contador++;
        }
        atual++;
    }
    
    return contador;
}

int main() {
    int n1, n2;
    
    cout << "Digite dois valores inteiros: ";
    cin >> n1 >> n2;
    
    int resultado = NumerosImpares(n1, n2);
    
    cout << "Quantidade de números ímpares no intervalo: " << resultado << endl;
    
    return 0;
}
