#include <iomanip>
#include <iostream>
using namespace std;

int main(){
    float salarioAtual, aumento, resultado;
    cout << "Digite o seu salarios: ";
    cin >> salarioAtual;
    cout << "Digite o aumento: ";
    cin >> aumento;
    resultado =  (salarioAtual * aumento / 100);
    salarioAtual = salarioAtual + resultado;

        cout << "Novo salario: " << salarioAtual <<  fixed << setprecision(2)  << endl;
        cout << "Aumento:" << resultado <<  fixed << setprecision(2);

return 0;
}