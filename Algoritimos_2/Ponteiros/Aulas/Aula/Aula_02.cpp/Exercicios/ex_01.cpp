#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    int n, soma =0;
    cin >> n;
    int *vet = new int [n];

    for(int i  =0; i < n; i++){
        cin >> vet[i];

        soma = soma + *(vet + i); // o *(vet + i)  é a mesma coisa que o vet[i];
    }

    cout << soma/n << endl;

    delete [] vet;


    return 0;
}