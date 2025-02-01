#include <iomanip>
#include <iostream>
using namespace std;

void insertionSort(int *vet, int n){
      int pivo;
        int i;
    for(int j = 1; j <n; j++){
      pivo = vet[i];
      i=i-1;
        while( i>=0 && vet[i] > pivo){
           vet[i+1] = vet[i];
           i--;
        }
        
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