#include <iostream>
#include <string>
using namespace std;

void informaConceito(float nota) {
    if (nota >= 94 && nota <= 100) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO A" << endl;
    } else if (nota >= 90 && nota < 94) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO A-" << endl;
    } else if (nota >= 87 && nota < 90) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO B+" << endl;
    } else if (nota >= 83 && nota < 87) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO B" << endl;
    } else if (nota >= 80 && nota < 83) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO B-" << endl;
    } else if (nota >= 70 && nota < 80) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO C" << endl;
    } else if (nota >= 60 && nota < 70) {
        cout << "ALUNO(A) APROVADO(A) COM CONCEITO D" << endl;
    } else if (nota <= 59) {
        cout << "ALUNO(A) REPROVADO(A) COM CONCEITO F" << endl;
    } else {
        cout << "Nota invalida!" << endl;
    }
}

int main() {
    float nota;
    cout << "Digite a nota final do aluno: ";
    cin >> nota;
    informaConceito(nota);
    return 0;
}
