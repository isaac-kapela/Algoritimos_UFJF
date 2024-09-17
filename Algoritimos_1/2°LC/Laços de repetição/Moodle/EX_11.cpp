#include <iostream>
using namespace std;

void avaliarAluno(int notaFinal, int numFaltas, int tarefasRealizadas) {
    int aulasTotais = 60;
    int minFrequencia = 75;
    int minAtividades = 30;

    double frequencia = ((aulasTotais - numFaltas) / (double)aulasTotais) * 100;

    if (notaFinal >= 60 && frequencia >= minFrequencia) {
        cout << "Aprovado" << endl;
    } else {
        if (frequencia >= minFrequencia && tarefasRealizadas >= minAtividades) {
            cout << "O aluno tem direito de fazer a prova substitutiva" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
    }
}

int main() {
    int quantAlunos;
    cin >> quantAlunos;

    for (int i = 0; i < quantAlunos; i++) {
        int notaFinal, numFaltas, tarefasRealizadas;
        cin >> notaFinal >> numFaltas >> tarefasRealizadas;
        avaliarAluno(notaFinal, numFaltas, tarefasRealizadas);
    }

    return 0;
}
