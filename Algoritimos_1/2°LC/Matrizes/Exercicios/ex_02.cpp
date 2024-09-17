#include <iomanip>
#include <iostream>
using namespace std;


int main(){

    int M[4][4];
    int maior;
    int menor;
    int pares = 0;
    float impares = 0;
    float mediaPar = 0, mediaImpar = 0;
    int contPar= 0;
    int contImpar = 0;

    for(int i = 0; i<4; i++)
    {   
        for(int j = 0; j < 4; j++)
        {
            cin >> M[i][j];
        }
    }
        maior = M[0][0];
         menor = M[0][0];


    for(int i =0; i < 4; i++)
    {
      for(int j = 0; j < 4; j++)
        {
            if(M[i][j] >= maior)
            {
                maior = M[i][j];
                
            }
            if(M[i][j] <= menor)
            {
                menor = M[i][j];
            }
            if(M[i][j] % 2 == 0)
            {
                pares = pares + M[i][j];
                contPar++;


            }
            if(M[i][j] % 2 != 0)
            {
                impares = impares +  M[i][j];
                contImpar++;


            }
        }

    }
    if(contPar > 0)
    {
        mediaPar =(float)pares / contPar;
    }
    if(contImpar > 0)
    {
        mediaImpar = (float)impares / contImpar;
    }

    cout << "Maior: " << maior << endl;
    cout << "Menor: " << menor << endl;
    cout << fixed << setprecision(2) << "Media Pares: " << mediaPar << endl;
    cout << fixed << setprecision(2) << "Media Impares: " << mediaImpar << endl;
    return 0;
}