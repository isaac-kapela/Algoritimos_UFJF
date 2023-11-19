#include <iomanip>
#include <iostream>
using namespace std;

#define tam 10

bool ler(int vetor[],int index ){
    for(int i =0; i < index; i++){
        if(vetor[i]== vetor[index]){
            return true;
        }
    }
    return false;
}
    
void funcao(int vetor[],int tamanho){
    for(int i =0; i < tamanho; i++){
       cout << "digite um vlaor";
       cin >> vetor[i];

    

    for(int j =0; j < i; j++){
        if(vetor[j] == vetor[i]){
            cout << "O valor ja foi digitado.digite um outro valor";
            i--;
            break;

        }
    }

    }
}

int main() {
    int vetorA[tam];
    funcao(vetorA, tam);    
    return 0;
}