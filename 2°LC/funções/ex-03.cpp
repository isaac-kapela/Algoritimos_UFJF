#include <iomanip>
#include <iostream>
using namespace std;

float IMC( float peso , float altura){
    float resultado = (altura * altura) / peso;

    return resultado;

}

int main(){
    float peso, altura, resultado;
    cin >> peso >> altura;
    resultado = IMC(peso, altura);
    cout << fixed << setprecision(6) << "IMC =" << resultado << endl;

}