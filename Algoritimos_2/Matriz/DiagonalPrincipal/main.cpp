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


    if(i>= 0 && i < 4 && j>=0 && j < 4){
        a.set(i,j,valor);
    }
    else{
        cout << " indece fora da diagonal principal" << endl;
    }
    a.preencheVetor();
    a.imprimeVetor();

    return 0;
}
