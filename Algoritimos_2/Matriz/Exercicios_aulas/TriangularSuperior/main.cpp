#include <iostream>
#include "Superior.h"
using namespace std;

int main()
{
    Superior a(4);
    int i,j,val;
    cout << "Linha: ";
    cin>> i;
    cout << "Coluna: ";
    cin>>j;
    cout << " val: " ;
    cin>> val;

    a.preencheVet();
    a.set(i,j,val);
    a.imprimeVet();


    return 0;
}
