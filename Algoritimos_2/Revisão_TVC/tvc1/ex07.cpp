#include <iomanip>
#include <iostream>
using namespace std;

int numDigitos(int n){
    if (n < 10){
        return 1;
    }
    else{
        return 1 + numDigitos(n/10);
    }
}

int main(){




    return 0;   
}