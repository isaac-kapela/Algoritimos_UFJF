#include <iomanip>
#include <iostream>
using namespace std;

void imprimeVetor(int *vet){

    for(int i = 0; i < 3; i++){
        cout << vet[i] << " ";
    }
 }

 void questao1(){
    int *vet = new int[5,1,7];
    imprimeVetor(vet);
    int *p1 = &vet[0];
    int *p2 = &vet[2];

    *p1 = *p2;
    *p2 = *p1;  
    imprimeVetor(vet);

    delete [] vet;
 }


int main(){



    return 0;
}