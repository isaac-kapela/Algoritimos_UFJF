// progroma que calcula media e retorna alunos acima da media
#include <iostream>
#include <iomanip>

using namespace std;

int inteiro(int vetor[10]){ 
    float media =0;
    int soma =0;
    
    return media;

 for(int i =0; i < 10; i++){
    soma = soma + vetor[i];
 }
 media = soma / 10;
}

 int vetor2(int vet[10], float r) {
    int numerosMaoir = 0;

    for(int i =0; i < 10; i++){
        if(vet[i] > r){
            numerosMaoir++;
        }
    }
    return numerosMaoir;
 }
 

int main(){
    int vetor[10];
    int media= 0;
    int aluno =0;
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }
    media =inteiro(vetor);
    aluno = vetor2(vetor,media);
    cout << aluno << endl;

    return 0;
}




