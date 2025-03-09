#include <iostream>
#include "Diagonal.h"
using namespace std;

int main()
{
    Diagonal a(4);
    int i, j, val;

    a.preenche();
    a.imprime();
    cout << endl;
    cout << "Digite o indice da linha: ";
    cin >> i;
    cout << "Digite o indice da coluna: ";
    cin >> j;
    cout << endl;
    cout << "Digite o valor: ";
    cin >> val;
    a.set(i, j, val);

    a.imprime();

    return 0;
}
