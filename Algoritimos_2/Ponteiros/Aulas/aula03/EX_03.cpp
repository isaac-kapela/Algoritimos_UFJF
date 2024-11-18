#include <iostream>
#include <string>

using namespace std;

    int* redimensiona(int vet[], int tam,int novo){
        if(novo <= tam){
            return vet[];
        }
        else{
            int *novoVet = new int [novo];
            // copia o vet para o novo vet
            for(int i =0; i< tam; i++){
                novoVet[i] = vet[i];
            }

            // coloca zero nas posições restantes
            for(int i = tam; i< novo; i++){
                novoVet[i] = 0;
            }
            return novoVet;
        }
    }


int main(){
    int n, novoTam, *v1;
    cin >> n;

    cin>> novoTam;

    v1 = new int[n];

    for(int i =0; i<n; i++){
        cin >> n;
    }

    int *v2 = redimensiona(v1,n,novoTam);

    for(int i =0; i < novoTam; i++){
        cout << v2[i];
    }
    delete [] v1;
    delete [] v2.
    return 0;
}

  