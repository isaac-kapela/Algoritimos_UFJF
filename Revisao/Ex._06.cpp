#include <iostream>
#include <iomanip>
using namespace std;

int func(){
    int numero;
    
    int maior_numero =0;
    cin >> numero;

    while(numero !=  0){


  if ( numero > maior_numero){
         maior_numero = numero;
        
        cin >> numero;
    }
 
    }

    return maior_numero;
 
}

int  fun(int num){
    int global =0;
    cin >> num;
    for(int i = 0; i< num; i++ ){
        int local = func();
        if(local> global){
            global = local;
        }
    }
    return global;

}

int main(){
    int num, resultado;
    cin >> num;
    if(num >= 0 && num <= 100){
       resultado = fun(num);

       cout<< "o maior numero é:" << resultado;
        
    }
    else{
        cout << "valor invalido";
    }

    return 0;    
}