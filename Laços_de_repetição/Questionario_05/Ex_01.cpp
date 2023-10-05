#include <iomanip>
#include <iostream>
using namespace std;
//Escreva um programa que leia a nota de vários alunos e imprima na tela se cada um destes foi ou não aprovado.
// Seu programa deve escrever na tela a palavra "Reprovado!" se a nota do aluno for inferior a 60 ou
// escrever "Aprovado!", caso contrário. A quantidade de notas a serem lidas deve ser informada no início do programa.





int main(){

    int NumNota;
    cout << "Informe a nota do aluno";
    cin >> NumNota;

    int contador =0 ;

    while(contador < NumNota){
        int nota;
        cout << "Digite a nota do aluno " << contador + 1 << ": ";
          cin >> nota;

         if (nota >= 60) {
            cout << "Aprovado!" << endl;
         } 
         else {
             cout << "Reprovado!" << endl;
    }
    
            contador++;


}
