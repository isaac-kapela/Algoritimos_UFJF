#include <iostream>
using namespace std;

void imprimirValores(int n1, int n2, int x) {
    if (n1 > n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}
    
    int contador = n1;
    while (contador <= n2) {
        if (contador % x == 5) {
            cout << contador << " ";
        }
        contador++;
    }
    cout << endl;
}

int main() {
    int n1, n2, x;
    
    cout << "Digite o valor de n1: ";
    cin >> n1;
    cout << "Digite o valor de n2: ";
    cin >> n2;
    cout << "Digite o valor de x: ";
    cin >> x;
    
    imprimirValores(n1, n2, x);
    
    return 0;
}
