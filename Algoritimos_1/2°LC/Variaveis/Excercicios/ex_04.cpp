#include <iomanip>
#include <iostream>
using namespace std;
int main (){
    float  pago = 0.46, quilowatts , resultado; 
    cout << "Digite a quantidade de quilowatts: ";
    cin >> quilowatts;

   resultado = (quilowatts *  pago) /100;

cout << "O valor a ser pago: R$" << resultado << fixed<< setprecision(1) << endl;

return 0;

}