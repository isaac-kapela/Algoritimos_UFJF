#include <iostream>
#include "TadTridiagonal.h";
using namespace std;

int main()
{   TadTridigonal a(4);
    int i,j, val;
    cout << "linha: ";
    cin>> i;
    cout << "coluna: ";
    cin>> j;
    cout << " valor: ";
    cin>> val;

    a.preencheVet();
    a.set(i,j, val);
    a.imprimeVet();
    return 0;
}
