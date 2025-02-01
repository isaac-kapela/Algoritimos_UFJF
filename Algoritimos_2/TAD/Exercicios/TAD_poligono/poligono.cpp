#include "Poligono.h"
#include <cmath>
float Poligono::area(){
    return numLados*pow(tamLados,2)/(4*tan(3.1416/numLados));
}

float Poligono::perimetro(){
        return numLados*tamLados;
}

float Poligono::anguloInterno(){
    return 180*(numLados-2)/numLados;
}


