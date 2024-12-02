#include <iomanip>
#include <iostream>
using namespace std;
float soma(float x, int n){
    if(n == 1){
        return x;
    }
    else{
        return (POW(x, n) / n) * pow(-1, n-1) + soma(x, n-1);
    }
}

int main(){

    return 0;
}