#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, x2, y1, y2;
    float p1, p2, distancia;
    
     cout << "Digite as coordenadas do primeiro ponto (x1 y1): ";
    cin >> x1 >> y1;
    
   cout << "Digite as coordenadas do segundo ponto (x2 y2): ";
    cin >> x2 >> y2;
    
    p1 = x2 - x1;
    p2 = y2 - y1;
    
    distancia = sqrt(pow(p1, 2) + pow(p2, 2));

    cout << "Distancia: " << fixed << setprecision(4) << distancia << endl;

    return 0;
}
