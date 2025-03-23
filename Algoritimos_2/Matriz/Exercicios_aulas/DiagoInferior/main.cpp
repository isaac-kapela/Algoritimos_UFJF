#include <iostream>
#include "Inferior.h"
using namespace std;

int main()
{
    Inferior a(4);
    int i,j,val;
    a.preenche();
    a.imprime();
    cout << "Digite o indice linha: ";
    cin>> i;
    cout << "Digite o indice coluna: ";
    cin>>j;
    cout << "Digite o val: ";
    cin>>val;
    cout << endl;
    a.set(i,j,val);
    a.imprime();


    return 0;
}
