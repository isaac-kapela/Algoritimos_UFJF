#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int vetor1[2], vetor2[2], vetor3[4];
    for(int i = 0; i < 2; i++){
        cin>> vetor1[i] >> vetor2[i];
    }

    int  i = 0, j =0;

    for(int idx = 0; idx < 4; idx++){
        cout << vetor3[i];
        if(i < 4 &&(j == 5 || vetor1[i] < vetor2[i] )){
            vetor3[idx] = vetor1[i++];
        }
        else{
            vetor3[idx]  = vetor2[j++];
        }

    }
    for(int i =0; i < 4; i++){
        cout << vetor3[i];

    }
}