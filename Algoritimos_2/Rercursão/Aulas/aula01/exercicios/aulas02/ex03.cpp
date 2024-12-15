#include <iostream>
#include <iomanip>
using namespace std;

bool negativo(int vet[], int n){
if(n == 1){
    if(vet[0] < 0){
        return true;
    }
    else{
        return false;
    }
}

    else{

    bool valoreNegativos = negativo(vet, n-1);
    if(vet[n-1] < 0){
        return true;
    }
    else{
        return false;
    }

    }

}



int main(){
    int *vet;
    int n;
    cin >> n;

    vet = new int [n];
    for(int i =0; i < n; i++){
        cin>> n;
    }
    int valoreNegativos = negativo(vet, n);
    cout << valoreNegativos;

    delete [ ] vet;


    
    return 0;
}