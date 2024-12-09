#include <iomanip>
#include <iostream>
using namespace std;

int menor(int vet[], int n){


    if(n == 1){
        return vet[0];
    }
    int Menor = menor(vet+1, n-1);
    if(vet[0] < Menor){
        return vet[0];
    }
    else{
        return Menor;
    }
   // else if(Menor < vet[n]){
      //menor(n-1);
     //}

}

int main(){

    int *vet;
    int n;
    cout << " digite o tamanho do vet";
    cin >> n;
    vet = new int [n];

    for(int i =0; i < n; i++){
        cin >> vet[i];
    }

    int menorValor = menor(vet,n);
    cout << menorValor << endl;

    delete [] vet;




    return 0;
}