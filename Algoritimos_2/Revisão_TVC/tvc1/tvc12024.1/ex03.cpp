#include <iomanip>
#include <iostream>
using namespace std;

 void contaNegativos(int* vet, int n, int* neg){
    for(int i =0; i < n; i++){
        if(vet[i] <0){
            (*neg)++;
        }
        else{
            (*neg) = 0;
        }

    }
 }
int main(){


    return 0;
}