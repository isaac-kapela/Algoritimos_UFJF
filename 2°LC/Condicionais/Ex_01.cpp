#include <iomanip>
#include <iostream>
using namespace std;

    void Semana( int DiaSEMANA){
        if( DiaSEMANA == 1){
            cout << "Domingo!";
        }
        else if(DiaSEMANA == 2){
            cout << "Segunda-feira!";
        }
        else if(DiaSEMANA == 3){
            cout << "Terça-feira!";
        }
        else if(DiaSEMANA == 4){
            cout << "Quarta-feira!";
        }
        else if(DiaSEMANA == 5){
            cout << "Quinta-feira!";
        }
        else if(DiaSEMANA == 6){
            cout << "Sexta-feira!";
        }
        else if(DiaSEMANA == 7){
            cout << "Sábado!";
        }
        else{
            cout << "Dia da semana inválido!";
        }
            return ;
    }
  int main(){
    int DiaSEMANA;
    cin >> DiaSEMANA;
    Semana(DiaSEMANA);
    return 0;
  }