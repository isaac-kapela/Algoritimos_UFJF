#include "Esparsa.h"
#include <iostream>
using namespace std;

MatrizEsparsa::MatrizEsparsa(int a1,int b1,int a2,int b2,int n)
{
    c1=a1;
    f1=b1;
    c2=a2;
    f2=b2;
    int folga = ((f1-c1+1)*(f2-c2+1)*0.1);
    Max = n + folga;
    nnz = 0;
    tab = new Tripla[Max];

    // incializa tab
}

 int folga=((f1-c1+1)*(f2-c2+1)) * 0.1;
