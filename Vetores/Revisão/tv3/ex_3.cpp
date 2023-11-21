#include <iostream>
#include <cstring>
using namespace std;

void funcao(char palavra[10]) {
    int tamanho;
    tamanho = strlen(palavra);
    char aux;

    for (int i = 0; i < 10 / 2; i++) {
        aux = palavra[i];
        palavra[i] = palavra[tamanho - 1 - i];
        palavra[tamanho - 1 - i] = aux;
    }
}

void fun(char maiuscula[10]) {
    // Converte o primeiro caractere para maiúsculas
    if (maiuscula[0] >= 'a' && maiuscula[0] <= 'z') {
        maiuscula[0] = maiuscula[0] - ('a' - 'A');
    }
}

int main() {
    char v[10];
    cout << "Digite: ";
    cin.getline(v, 10);
    funcao(v);
    fun(v);
    cout << "A palavra invertida é: " << v;

    return 0;
}
