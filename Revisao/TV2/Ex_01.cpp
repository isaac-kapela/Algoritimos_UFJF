#include <iostream>
using namespace std;

// Função para classificar o peso do animal em Urano
string classificarPesoUrano(double pesoTerra) {
    double pesoUrano = pesoTerra * 1.17; // Converter peso para Urano
    if (pesoUrano < 35) {
        return "Grupo 1";
    } else if (pesoUrano >= 50 && pesoUrano <= 75) {
        return "Grupo 2";
    } else {
        return "O animal não pertence a nenhum grupo de interesse";
    }
}

int main() {
    int n;
    cout << "Digite a quantidade de animais: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        double pesoTerra;
        cin >> pesoTerra;
        string resultado = classificarPesoUrano(pesoTerra);
        cout << resultado << endl;
    }

    return 0;
}
