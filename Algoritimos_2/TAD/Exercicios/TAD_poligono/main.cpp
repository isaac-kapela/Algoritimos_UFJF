#include <iostream>
#include "Poligono.h"

using namespace std;

int main()
{
    Poligono p;

    cout << p.anguloInterno();
    cout << p.area();
    cout << p.perimetro();
    return 0;
}
