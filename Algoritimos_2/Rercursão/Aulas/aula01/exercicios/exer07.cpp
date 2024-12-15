#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;
float soma(float x, int n){
    if(n == 1){
        return x;
    }
    else{
        return (pow(x, n) / n) * pow(-1, n-1) + soma(x, n-1);
    }
}

int main(){

    return 0;
}