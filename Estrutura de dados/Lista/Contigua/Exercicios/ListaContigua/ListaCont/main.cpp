#include <iostream>
#include "Contigua.h"
using namespace std;

int main() {
    Contigua lista(10);

    lista.insere(5);
    lista.insere(10);
    lista.insere(15);
    lista.insere(20);
    lista.insere(25);

    cout << "Lista apos insercao: ";
    for (int i = 0; i < 5; i++) {
        cout << lista.get(i) << " ";
    }
    cout << endl;

    // Busca um elemento na lista
    int valorBusca = 15;
    if (lista.busca(valorBusca) == true) {
        cout << "Valor " << valorBusca << " encontrado na lista." << endl;
    } else {
        cout << "Valor " << valorBusca << " nao encontrado na lista." << endl;
    }

    // Troca os elementos nas posições 1 e 3
    if (lista.troca(1, 3) == true) {
        cout << "Troca realizada com sucesso!" << endl;
    } else {
        cout << "Erro: posicoes invalidas para troca." << endl;
    }

    // Exibe a lista após a troca
    cout << "Lista apos troca: ";
    for (int i = 0; i < 5; i++) {
        cout << lista.get(i) << " ";
    }
    cout << endl;

    // Remove um elemento da lista
    int valorRemocao = 15;
    lista.remove(valorRemocao);
    cout << "Valor " << valorRemocao << " removido da lista." << endl;

    // Exibe a lista após a remoção
    cout << "Lista apos remocao: ";
    for (int i = 0; i < 4; i++) { // Agora a lista tem 4 elementos
        cout << lista.get(i) << " ";
    }
    cout << endl;

    return 0;
}
