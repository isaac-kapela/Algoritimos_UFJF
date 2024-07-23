#include <iostream>
using namespace std;

void classificarObjeto(double pesoTerra) {
    double pesoMarte = pesoTerra * 0.38;

    if (pesoMarte < 5) {
        cout << "Grupo 1" << endl;
    } else if (pesoMarte >= 15 && pesoMarte <= 20) {
        cout << "Grupo 2" << endl;
    } else {
        cout << "O objeto não pertence a nenhum grupo de interesse" << endl;
    }
}

int main() {
    int quantidadeObjetos;
    cin >> quantidadeObjetos;

    for (int i = 0; i < quantidadeObjetos; i++) {
        double peso;
        cin >> peso;
        classificarObjeto(peso);
    }

    return 0;
}
