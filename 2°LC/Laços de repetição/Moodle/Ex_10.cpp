#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int dependentes, idade;
    int auxilio, contador;

    for(int i = 0; i < 5; i++) {
        cin >> dependentes; 
        contador = 0; 
        auxilio = 0; 

        for(int j = 0; j < dependentes; j++) {
            cin >> idade; 
            if(idade < 18) {
                contador++; 
            }
        }

        auxilio = contador * 60; 
        cout << "Valor total do auxilio: R$" << auxilio << fixed << setprecision(2) << endl; 
    }

    return 0;
}