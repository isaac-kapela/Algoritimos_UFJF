#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED

class Poligono{
private:
    int numLados;
    int tamLados;


public:
    int area(numLados, tamLados);
    int anguloInterno(numLados, tamLados);
    int perimetro(numLados, tamLados);
};


#endif // POLIGONO_H_INCLUDED
