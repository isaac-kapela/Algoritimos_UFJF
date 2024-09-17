#include <iostream>
#include <cstring> 
using namespace std;
#define MAX 100

void codificador(char vet[],int k){
    int t;
    t = strlen(vet);
    

    for(int atual = 0; atual < t; atual++){
        if(vet[atual] != ' '){
            vet[atual] = vet[atual] + 2 + k;
        }
    }

    for(int i = 0; i < t; i++){
        cout << vet[i];
    }
}

int main(){
    char vet[MAX];
    int k;
    cin.getline(vet,MAX);
    cin >> k;
    codificador(vet,k);

    return 0;
}