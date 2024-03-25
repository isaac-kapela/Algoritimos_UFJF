#include <iomanip>
#include <iostream>
using namespace std;
#define tam 10

bool ler(int vetor[], int index){
    for(int i =0; i < index; i++){
        if(vetor[i] == vetor[index]){
            return true;
        }
    }
    return false;
}

void funcao(int vetor[], int tamanho){
        for(int i =0; i < tamanho; i++){
            cout << "digite um valor:";
            cin >>vetor[i];

            for(int j =0; j < i; j++){
                cout << "digite um outro valor:";
                i--;
                break;
           }
        }
}

int main(){
    int vetorA[tam];
    funcao(vetorA,tam);
    return 0;
}