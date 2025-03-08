#include <iostream>
#include "Portal.h"
using namespace std;

int main()
{
    Portal a(4);
    int val, i, j;
    cout << "Linha: ";
    cin>> i;
    cout << "Coluna: " ;
    cin >> j;
    cout << "Digite o valor: " ;
    cin >> val;
    a.preenche();
    a.imprime();
    a.set(i,j, val);
    cout << endl;
    a.imprime();


    return 0;
}
