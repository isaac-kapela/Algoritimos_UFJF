#include <iomanip>
#include <iostream>
using namespace std;

float harmonico(float n){

    if(n ==1){
        return 1;

    }
    else{
        return 1.0/n + harmonico(n-1);
    }
}

int main(){

float n;
cin>> n;
harmonico(n);
    return 0;
}