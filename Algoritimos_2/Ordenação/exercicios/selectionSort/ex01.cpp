#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;   
    int *vet = new int [n];
    int menor;
    int aux;
    for(int i =0; i < n; i++){
        cin >> vet[i];
    }
    for(int i =0; i < n; i++){
        menor = i;
        for(int j =i+1; j < n; j++){
            if(vet[j] < vet[menor]){
                menor = j;
            }
            aux = vet[i];
                vet[i] = vet[menor];
                vet[menor] = aux;
        }
    }


    for(int i =0; i < n; i++){
        cout << vet[i] << " ";
    }
    delete []  vet;

return 0;

}