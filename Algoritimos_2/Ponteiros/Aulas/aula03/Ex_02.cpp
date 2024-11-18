#include <iostream>
#include <string>

using namespace std;
int* indicesPares(int vet[], int n){
        int *vet2 = new int[n/2]
        for(int i =0, j=0; i < n, j<n; i=i+2, j++){
            vet2[j] = vet[i];

        }

        return vet2;
    }


int main(){
    int n;
    cin >> n;

    int *vet = new int [n];
    for(int i =0; i < n; i++){
        cin>> vet[i];
    }
   

    int *vet2 =  indicesPares(vet,n);

    for(int i =0; i <n; i++){
        cout<< vet2[i];
    }

    delete [] vet;
    delete[] vet2;

 

    return 0;
}
