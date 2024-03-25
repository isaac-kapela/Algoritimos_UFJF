//programa que imprime numeros impares de um vetor

#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int vetor[10];

    // Lê os elementos do vetor
    for (int i = 0; i < 10; i++) {
        cout  << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Imprime os elementos ímpares
    
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            cout << vetor[i] << " ";
        }
    }

    cout << std::endl;

    return 0;
}
