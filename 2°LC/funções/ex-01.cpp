#include <iomanip>
#include <iostream>
using namespace std;

void angulo( int angulo1, int angulo2 ) {
    cin>> angulo1 >> angulo2;
    int resultado = 180 - (angulo1 + angulo2);
    cout << "Angulo = "<< resultado << " graus"<< endl;
    


}