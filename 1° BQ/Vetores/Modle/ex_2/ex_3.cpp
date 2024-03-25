#include <iostream>
#include <iomanip>

using namespace std;

void calcularPontuacao(int J1[10], int J2[10], int R[2]) {
    for (int i = 0; i < 10; i++) {
        if ((J1[i] + J2[i]) % 2 == 0) {
            R[0]++;
        } else {
            R[1]++;
        }
    }
}

int main() {
    int J1[10] = {};
    int J2[10] = {};
    int R[2] = {};

    // Lê os elementos do vetor J1
    for (int i = 0; i < 10; i++) {
        cin >> J1[i];
    }

    // Lê os elementos do vetor J2
    for (int i = 0; i < 10; i++) {
        cin >> J2[i];
    }

    calcularPontuacao(J1, J2, R);

    cout << "Jogador 1: " << R[0] << endl;
    cout << "Jogador 2: " << R[1] << endl;

    return 0;
}
