#include <iostream>
#include <iomanip>
using namespace std;

int pares(int vet[], int n){
    int cont =0;
    if(n == 1 ){
        if(vet[0] % 2 == 0){
            return 1;
        }
        else{
            return 0;
        }
    }

 int quantPares = pares(vet, n-1 );
 if(vet[n-1]% 2 == 0){
    return quantPares++;
 }else{
    return quantPares;
 }


}


int main(){

    int *vet;
    int n;
    cin >> n;

    vet = new int [n];

    for(int i =0; i < n; i++){
        cin >> vet[i];
    }

    int quantPares = pares(vet, n);
    cout << quantPares << endl;

    delete [] vet;


    return 0;
}