#include <iostream>
#include <string>

using namespace std;
int* indicesPares(int vet[], int n){
        int *vet2 = new int[n/2]
        for(int i =0; i < n; i+2){
            vet2[i] = vet[i];

        }

        return *vet2;
    }


int main(){
    int n;
    cin >> n;

    int *vet = new int [n];
    for(int i =0; i < n; i++){
        cin>> vet[i];
    }
    indicesPares(vet,n);

    for(int i =0; i <n; i++){
        cout<< vet[i];
    }

delete [] vet;

 

    return 0;
}
