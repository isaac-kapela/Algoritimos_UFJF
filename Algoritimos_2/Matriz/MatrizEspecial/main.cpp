#include <iostream>
#include "DiagoAnti.h";
using namespace std;

int main()
{
    DiagoAnti a(4);
    int i,j,val;
    cout << "linha: ";
    cin>>i;
    cout << "coluna: ";
    cin>>j;
    cout << "val: ";
    cin>>val;
    a.preencheVetor();
    a.set(i,j,val);
    a.imprimeVet();
    return 0;
}
