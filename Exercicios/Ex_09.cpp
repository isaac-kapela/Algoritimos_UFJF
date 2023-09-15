# include <iostream>
#include <iomanip>
 using namespace std;

 void aumentoPorce(float salarioAtual, float aumento) {
        float resultado;
        resultado =  salarioAtual + (aumento/100 * salarioAtual);
        cout << "O resultado é: " << resultado;

 
 }
 int main (){


    float salario,aumento;
    cout << "Digite o salario e o aumento: ";
    cin >> salario >> aumento;

   aumentoPorce(salario, aumento);

    return 0;
 }