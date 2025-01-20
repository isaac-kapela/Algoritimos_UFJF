#include <iomanip>
#include <iostream>
using namespace std;
#include <cstdlib>

int numeroAleatorio(int m)
{
// retorna um valor no intervalo [0, m-1]
return rand() % m;
}

int* vetorAleatorio( int n){
    
    int *vet = new int[n]
    for(int i =0; i < n; i++){
        vet[i] = numeroAleatorio(n);
    }
    for(int i =0; i < n; i++){
        cout << vet[i]<< " " ;
    }
    cout << endl;
    return vet;
}

int main(){
    int n;
    cin>> n;

   int vet[n];
   vetorAleatorio( n);
   
   for(int i = 0; i < n; i++){
       cout << vet[i]<< " ";
   }

 delete [] vet;
    return 0;
}