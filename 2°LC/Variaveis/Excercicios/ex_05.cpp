#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float pago = 0.46, quilowatts, resultado1, resultado2;
    cin >> quilowatts;

    resultado1 = quilowatts * pago;
    resultado2 = resultado1 * 1.18; // Adiciona 18% ao valor calculado

    cout << "Valor total a ser pago: R$ " << fixed << setprecision(2) << resultado2 << endl;

    return 0;
}
