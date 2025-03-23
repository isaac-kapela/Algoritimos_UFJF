#include <iostream>
#include "DiagoSecundaria.h";
using namespace std;

int main()
{
    Secundaria a(5);
    int i,j,val;
    a.preenche();
    a.imprime();
    a.ehQuadrada();
    cout << " Inidice linha: ";
    cin>> i;
    cout << "Indice coluna: ";
    cin >> j;
    cout << "Digite o val: ";
    cin>> val;
    a.set(i,j,val);
    a.imprime();

    return 0;
}
