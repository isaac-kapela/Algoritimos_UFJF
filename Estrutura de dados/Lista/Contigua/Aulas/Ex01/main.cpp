#include <iostream>
#include "ListaCont.h"
using namespace std;

int main()
{
    ListaCont lista(5);

    lista.insereFinal(10);
    lista.insereFinal(20);
    lista.insereFinal(30);

    // Exibe os elementos da lista
    cout << "Lista apos insercao final: ";
    for (int i = 0; i < 3; i++)
    {
        cout << lista.get(i) << " ";
    }
    cout << endl;

    // Insere um elemento na posição 1
    lista.insereK(1, 15);

    // Exibe os elementos da lista
    cout << "Lista apos insercao na posicao 1: ";
    for (int i = 0; i < 4; i++)
    {
        cout << lista.get(i) << " ";
    }
    cout << endl;

    // Remove o elemento na posição 2
    lista.removeK(2);

    // Exibe os elementos da lista
    cout << "Lista apos remocao na posicao 2: ";
    for (int i = 0; i < 3; i++)
    {
        cout << lista.get(i) << " ";
    }
    cout << endl;

    // Remove o último elemento
    lista.removeFinal();

    // Exibe os elementos da lista
    cout << "Lista apos remocao final: ";
    for (int i = 0; i < 2; i++)
    {
        cout << lista.get(i) << " ";
    }
    cout << endl;

    return 0;
}
