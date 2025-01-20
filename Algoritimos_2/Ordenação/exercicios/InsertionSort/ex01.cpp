#include <iomanip>
#include <iostream>
using namespace std;


int main(){
int n;
int posicao2;
int j;
cin >> n;
int *vet = new int [n];
for(int i =0; i < n; i++){
    cin >> vet[i];
}

for(int i =1; i < n; i++){
    posicao2 = vet[i];
    j = i - 1;
    while(i >= 0 &&  vet[j] > posicao2){
        j = j - 1;
    }
            vet[j+1] = posicao2;

}


    return 0;
}