#include <iostream>
using namespace std;
#include "TadDiagonal.h";
int main()
{
    TadDiagonal a(4);
    int i,j, valor;
    cout << " linha: ";
    cin>> i;
    cout << " coluna: ";
    cin>> j;
    cout << " valor: ";
    cin>> valor;

    a.preencheVetor();
    a.set(i,j,valor);
    a.imprimeVetor();


    return 0;
}
