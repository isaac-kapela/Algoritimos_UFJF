#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int quantidade = 1;
int nota;
int contador = 0;

cin>> quantidade;
while(contador < quantidade){
    cin >> nota;
    if(nota < 60){
       cout << "Reprovado!" << endl;
    }
    
    else if(nota >= 60){
        cout << "Aprovado!"  << endl;
    }
    

contador++;

}

    return 0;
}