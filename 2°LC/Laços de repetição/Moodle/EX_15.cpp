#include <iostream>
using namespace std;

int somaIntervalo(int n1, int n2) {
    int soma = 0;
    if (n1 > n2) {
        swap(n1, n2);
    }
    for (int i = n1; i <= n2; i++) {
        soma += i;
    }
    return soma;
}

int main() {
    int n1, n2;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    int resultado = somaIntervalo(n1, n2);
    cout << "A soma dos números no intervalo fechado entre " << n1 << " e " << n2 << " é: " << resultado << endl;
    return 0;
}