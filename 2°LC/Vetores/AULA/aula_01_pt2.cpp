#include <iostream>
using namespace std;


int encontrarMaior(float vetor[], int tamanho) {
    int indice=0;
    int maior = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            indice = i;
        }
    }
    return indice;
}

int main() {
    float vetor[6];
    int posicao;
    for (int i = 0; i < 5; i++) {
        cout << "Digite o valor " << i + 1 << ": ";
        cin >> vetor[i];
    }
    posicao = encontrarMaior(vetor, 5);
    cout << "O maior valor foi digitado na posição " << posicao + 1 << endl;
    return 0;
}