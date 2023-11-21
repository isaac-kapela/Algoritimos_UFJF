#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    int vetor1[2], vetor2[2], vetor3[4];

    for(int i = 0; i < 2; i++){
        cin >> vetor1[i] >> vetor2[i];
    }
    int i =0, k =0, j= 0;
    while(i < 2 && j < 2){
        if(vetor1[i] < vetor2[j]){
            vetor3[k] = vetor1[i];
            i++;
        }
        else{
            vetor3[k] = vetor2[j];
            j++;
        }
        k++;
         
    }
    while(i < 2){
        vetor3[k] = vetor1[i];
         i++; k++; 
    }

    while(j < 2){
        vetor3[k] = vetor2[j];
         j++; k++; 
    }
    for(int idx =0; idx < 4; idx++){
        cout << vetor3[i];  

    }

}