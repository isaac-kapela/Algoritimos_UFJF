#include <iostream>
#include "Matriz2D.h"
using namespace std;

int main()
{
    int linha, coluna, val;
    cout << "digite o indice da linha: ";
    cin>> linha;
    cout << "digite o indice da coluna: ";
    cin >> coluna;
    Matriz2D a(4, 4);

    cout << "digite val: ";
    cin >> val;
    a.preencheMat();
    a.imprimeMat();
    cout << endl;
    a.set(linha, coluna, val);
    a.imprimeMat();

    return 0;
}
