    #include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
#define  tam 100
     int relacao(int matriz[][tam], int vet[], int total){

            for(int i = 0; i < total; i++){
                for(int j = 0; j < total; j++){
                    if(i == j){
                        matriz[i][j] = 0;

                    }
                    else if(matriz[1][2] && matriz[2][1]){
                        matriz[i][j] = 1;
                    }
                    else{
                        matriz[i][j] = 0;
                    }

                }
            }
        }


    



int main(){
    return 0;
}