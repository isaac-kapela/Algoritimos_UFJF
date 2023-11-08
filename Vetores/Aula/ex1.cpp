// programa que imprime o menor numero de um vetor

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int vetor[5];

    // Lê os elementos do vetor
    for (int i = 0; i < 5; i++) {
        //cout  << i + 1 ;
        cin >> vetor[i];
    }

    // Imprime o menor elemento do vetor
    int menor =0;
    int index =0;  
    for (int i = 0; i < 5; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];  
            index= i;
        }
    }
     cout<< "Menor elemento: "<< menor << "o indice é:"<< index;;
     

    return 0;
}
