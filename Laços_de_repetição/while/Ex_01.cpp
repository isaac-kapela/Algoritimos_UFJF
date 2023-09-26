#include <iostream>
#include <iomanip>
using namespace std;

int mmain(){
    int numero;
    cout << "Digie o numero inteiro";
    cin >> numero;
     int soma =0;
     int contador =1;
     while (contador <= numero){
                // o soma vai receber ele mesmo e valor atual do contador 

        soma= soma + contador;
        contador++;
     }
     cout << "A soma dos numeros de 0 ate" << numero << "= " << soma << endl;
     
}