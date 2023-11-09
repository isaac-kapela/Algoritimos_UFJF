#include <iomanip>
#include <iostream>
using namespace std;

int func(int vetor[5]){
    for(int i =0; i < 5; i++){
        cin >> vetor[i];
    }

    int menor = vetor[0];
    int index=0;
    for(int i =0; i < 5; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            index = i;
        }
    }

    cout << "Menor elemento:"<< menor << "indice"<< index;
}

int main(){
    return 0;
}