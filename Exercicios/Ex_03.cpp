#include <iostream>
#include <iomanip>
#include <cmath> // Para usar a função sqrt

using namespace std;


double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    

    
    double distancia = calcularDistancia(x1, y1, x2, y2);

    
    cout << fixed << setprecision(4);

    
    cout << "Distancia: " << distancia << endl;

    return 0;
}
