#include <iomanip>
#include <iostream>
using namespace std;

void troca(int *vetA, int *vetB, int tam){
    for(int i =0; i < tam; i++){
        int aux = vetA[i];
        int  aux2 = vetB[i];
        vetA[i] = aux2;
        vetB[i] = aux;
    }
}

int main(){

int tam;
cin >> tam;


int *vetA = new int [tam];
int *vetB = new int [tam];

for(int i = 0; i < tam; i++){
    cin >> vetA[i];
}

for(int i = 0; i < tam; i++){
    cin >> vetB[i];
}

troca(vetA, vetB, tam);

for(int i = 0; i < tam; i++){
    cout << vetA[i] << " ";
}

for(int i = 0; i < tam; i++){
    cout << vetB[i] << " ";

}

delete [] vetA;
delete [] vetB;
    return 0;   
}