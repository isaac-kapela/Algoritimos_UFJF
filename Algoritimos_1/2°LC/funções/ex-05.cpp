#include <iomanip>
#include <iostream>
using namespace std;

int Diferenca( int  a, int  b, int  c, int  d){
    int resultado ;
    resultado = (a * b - c * d);

    return resultado ;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << "DIFERENCA = "<< Diferenca(a, b, c, d) << endl;
    return 0;
}