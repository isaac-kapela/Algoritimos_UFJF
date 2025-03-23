#include <iostream>
#include "X.h"
using namespace std;

int main()
{
    X a(4);
    int i, j, val;
    a.preenche();
    a.imprime();
    a.ehQuadrada();
    cout << "Linha: ";
    cin >> i;
    cout << "Coluna: ";
    cin>>j;
    cout << "Val: ";
    cin >> val;
    cout << endl;
    a.set(i,j,val);
    a.imprime();
    return 0;
}
