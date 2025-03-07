#include "Esparsa.h"
#include <iostream>
using namespace std;

Esparsa::Esparsa(int a1,int a2, int b1, int b2, int n){
    linhaLimiteIncial = a1;
    linhaLimiteFinal = b1;
    colunaLimiteInicial = a2;
    colunaLimiteFinal = b2;
    int folga = ((linhaLimiteFinal-linhaLimiteIncial+1) *(colunaLimiteFinal-colunaLimiteInicial))* 0.1;
    max = n + folga;
    numNaoZero =0;
    tab = new Tripla[max];
    col
}
