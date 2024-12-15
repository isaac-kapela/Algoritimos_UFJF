

#include <iostream>
#include <iomanip>
using namespace std;

int auxiliarIguais(int vet1[], int vet2[], int n, int i){

    if(i == n-1){
        if(vet1[i] == vet2[i]){
            return -1;
        }
        else{
            return i;
        }
    }
    else{
        if(vet1[i] == vet2[i]){
            return auxiliarIguais(vet1, vet2, n, i+1);
        }
        else{
            return i;
        }
    }
}

int iguais(int vet1[], int vet2[], int n){

   return auxiliarIguais(vet1, vet2, n, 0){


   }
}



int main(){
    int vet1[], vet2[], n,
    cin >> n;

    vet1 = new int [n];
    vet2 = new int [n];

    for(int i = 0; i < n; i++){
        cin >> vet1[i]
    }

    for(int i = 0; i < n; i++){
        cin >> vet2[i]
    }

    cout << iguais(vet1, vet2, n);

    delete [] vet1;
    delete [] vet2;

    
    return 0;
}