#include <iostream>
using namespace std;

void troca(float vet[], int tam){


int i, indeMenor =0;
float aux, menor;
menor = vet[0];
for(int i = 1; i < tam; i++){
    if(vet[i] < menor){
        menor = vet[i];
        indeMenor = i;
    }

}
aux =vet[indeMenor];
vet[indeMenor] = vet[0];
vet[0] = aux;


}
int main(){
    return 0;
}