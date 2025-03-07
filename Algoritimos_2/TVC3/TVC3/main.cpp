#include <iostream>
#include "Jogador.h"
#include <string>
#include "MatrizLitra.h"
using namespace std;

int main()
{
    MatrizListra mat(3,5);
    mat.setElemento(0,1,1);
    mat.setElemento(1,1,2);
    mat.setElemento(2,1,3);
    mat.setElemento(0,3,4);
    mat.setElemento(1,3,5);
    mat.setElemento(2,3,6);
    mat.imprime();
    return 0;
}
