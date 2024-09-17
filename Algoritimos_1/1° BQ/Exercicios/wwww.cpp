#include <iostream>
#include <iomanip>
using namespace std;



float pagamento(){
    int quantidade;
    float unitario, acumulador =0;
    cout << "Informe a quantidades de produtos comprados";
    cin >> quantidade;
    while (quantidade > 0){
        cout << "Informe o preço unitario";
        cin >> unitario;
        acumulador = acumulador + (unitario * quantidade);
        cout << "Informe a quantidades de produtos comprados";
        cin >> quantidade;
    }

    return acumulador;        
}

int main(){
    float total = pagamento();
    cout << "/n"<< total;
}