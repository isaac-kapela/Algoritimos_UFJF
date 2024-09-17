#include <iostream>
using namespace std;

// Função que imprime todos os divisores positivos de x
void imprimirDivisores(int x) {
    if (x <= 0) {
        cout << "O número " << x << " não tem divisores positivos." << endl;
        return;
    }
    cout << "Divisores de " << x << ": ";
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int x;
    cout << "Digite um número: ";
    cin >> x;
    imprimirDivisores(x);
    return 0;
}