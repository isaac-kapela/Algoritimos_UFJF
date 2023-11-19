#include <iostream>
using namespace std;

int main(){
    int vetor1[2], vetor2[2], vetor3[4];
    for(int i = 0; i < 2; i++){
        cout << "Digite os valores";
        cin >> vetor1[i] >> vetor2[i];
    }
    for(int i = 0, j = 0, k = 0; i < 2 && j < 2; k++){
        if(vetor1[i] < vetor2[j]){

            vetor3[k] = vetor1[i++];
        }
        else{
            vetor3[k] = vetor2[j++];
        }
    }

    for(int i = 0; i < 2; i++){
        vetor3[(i*2)] = vetor1[i];
        vetor3[(i*2)] = vetor2[i];
    }

    for(int i = 0; i < 4; i++){
        cout << vetor3[i];
    }

}