#include <iomanip>
#include <iostream>
using namespace std;


bool auxEhPrimo(int n, int i){
    if(i*i > n){
        return true;
    }
    else if(n % i ==0){
        return false;
    }

    else{
        ehPrimo(n, i+1);
    }

    }

    

bool ehPrimo(int n){
    if(n ==1){
        return false;
    }
    else{
     return auxEhPrimo(n,2);
    }
    
}


int main(){

    int n;
    cin>> n;

    if(ehPrimo(n)){
        cout << "E primo" << endl;
    }
    else{
        cout << "não é primo"<< endl;
    }


    
    return 0;
}