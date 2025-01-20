#include <iomanip>
#include <iostream>
using namespace std;

void selectionSort(int *vet,int n){
    int aux;
    for(int i =0; i < n; i++){
        int menor = i;
        for(int j = i+1; j < n; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            

            }
        }
            aux = vet[menor];
                vet[menor] = vet[i];
                vet[i] = aux;
    }
}

int main(){

    int n;
    cin >> n;
    int *vet = new int[n];
    for(int i =0; i < n; i++){
        cin >> vet[i];
    }
    selectionSort(vet,n);

    for(int i =0; i <n; i++){
        cout << vet[i] << " ";
    }

    delete [] vet;

    return 0;
}