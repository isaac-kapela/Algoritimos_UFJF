#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    struct academicos
    {
        char nome[50];
        char disciplina[40];
        float nota_prova1;
        float nota_prova2;
    };
    academicos aluno;
    cin.getline(aluno.nome, 50);
    cin.getline(aluno.disciplina, 40);

    for (int i = 0; i < 5; i++)
    {
        cin >> aluno.nota_prova1;
        cin >> aluno.nota_prova2;
    }

    cout << "Nome ...........: " << aluno.nome << endl;
    cout << "Disciplina .....: " << aluno.disciplina << endl;

    cout << "Nota da Prova 1 ...: " << fixed << setprecision(2) << aluno.nota_prova1 << endl;
    cout << "Nota da Prova 2 ...: " << fixed << setprecision(2) << aluno.nota_prova2 << endl;

    return 0;
}