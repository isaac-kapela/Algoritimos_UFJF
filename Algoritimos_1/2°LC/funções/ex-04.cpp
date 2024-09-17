#include <iomanip>
#include <iostream>
using namespace std;

float loja( float codigo1, float numeroPeca1, float valorUnitario1,float codigo2, float numeroPeca2, float valorUnitario2){
  //  cout << "primeira peça" << endl;
    cin >> codigo1 >> numeroPeca1 >> valorUnitario1;

   // cout << "segunda peça" << endl;

    cin >> codigo2 >> numeroPeca2 >> valorUnitario2;

    float resultado = (numeroPeca1 * valorUnitario1) + (numeroPeca2 * valorUnitario2);
        return resultado;
}

int main(){

    float codigo1, numeroPeca1, valorUnitario1, codigo2, numeroPeca2, valorUnitario2, resultado;
    resultado = loja(codigo1, numeroPeca1, valorUnitario1,codigo2, numeroPeca2, valorUnitario2);
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$" << resultado << endl;

    return 0;
}