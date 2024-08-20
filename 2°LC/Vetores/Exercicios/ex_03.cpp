#include <iostream>
#include <iomanip> // Adicionado para usar setprecision
using namespace std;
#define MAX_VETOR 50

int main() {
    float vet[MAX_VETOR], vet1[MAX_VETOR], vet2[MAX_VETOR];
    float soma = 0, media = 0;
    int count_vet1 = 0, count_vet2 = 0;

    for (int i = 0; i < MAX_VETOR; i++) {
        cin >> vet[i];
        soma += vet[i];
    }
    media = soma / MAX_VETOR;

    for (int i = 0; i < MAX_VETOR; i++) {
        if (vet[i] > media) {
            vet1[count_vet1++] = vet[i];
        } else {
            vet2[count_vet2++] = vet[i];
        }
    }

    cout << fixed << setprecision(1); 
    cout << "Média: " << media << endl;

    cout << "V1 = ";
    for (int i = 0; i < count_vet1; i++) {
        cout << vet1[i] << " ";
    }
    cout << endl;

    cout << "V2 = ";
    for (int i = 0; i < count_vet2; i++) {
        cout << vet2[i] << " ";
    }
    cout << endl;

    return 0;
}