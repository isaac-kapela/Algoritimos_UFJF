#include <iomanip>
#include <iostream>
using namespace std;

bool ehPalindromo(char a[], int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(a[0] == a[n-1]){
        return ehPalindromo(a+1, n-2);
    }
    return false;
}

int main(){



    return 0;
}