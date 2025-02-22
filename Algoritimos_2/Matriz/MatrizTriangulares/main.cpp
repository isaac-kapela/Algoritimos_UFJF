#include "TADTriangular.h"
#include <iostream>
using namespace std;


int main()
{
    TADTriangular a(4);
    int i, j;

    cout << "Linha: ";
    cin >> i;
    cout << "Coluna: ";
    cin >> j;

    if (i >= 0 && i < 4 && j >= 0 && j < 4) {
        a.set(i, j, 5);
    } else {
        cout << "Erro: Índices fora do intervalo válido!" << endl;
    }

    a.preencheVetor();
    a.imprimeVetor();

    return 0;
}
