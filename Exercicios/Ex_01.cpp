#include <iostream>
 

using namespace std;



double calcularMediaDoCombustivel(double kmAndados, double combustivelUsado) {
    return kmAndados / combustivelUsado;

}
    int main(){

  double    kmAndados, combustivelUsado;
    cout << "Informe a quantidade de quilômetros rodados do primeiro conjunto: ";
     kmAndados, combustivelUsado;
    cin >> kmAndados ;
    cout << "Informe a quantidade de combustível consumido do primeiro conjunto (em litros): ";
    cin >> combustivelUsado;

double calcularMediaDoCombustivel(double kmAndados, double combustivelUsado) ;

        double media = calcularMediaDoCombustivel(kmAndados, combustivelUsado);


         cout << "A média de combustível do primeiro conjunto é: " << media << " Km/L" << endl;

    return 0;
} 