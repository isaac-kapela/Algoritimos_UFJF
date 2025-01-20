#include <iomanip>
#include <iostream>
using namespace std;

int main(){

int n;
cin >> n;
int *vet = new int [n];
int soma =0;

for(int i =0; i < n; i++){
    cin >> vet[i];
}

for(int i =0; i < n; i++){
    soma = soma + vet[i];
}

cout << soma/10;

    delete []  vet;

    return 0;

}

