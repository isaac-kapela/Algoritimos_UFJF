#include <iomanip>
#include <iostream>
using namespace std;

void imprimeIntervalo(int a, int b, int inc){
    if(a<=b){
        cout << a << " ";
        imprimeIntervalo(a+inc, b, inc);
    }
}

int main(){

    int a,b,inc;
    cin>> a >> b>> inc;
    imprimeIntervalo(a,b,inc);

    return 0;
}