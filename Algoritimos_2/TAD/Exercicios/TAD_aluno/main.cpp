#include <iostream>
using namespace std;
#include "Aluno.h"
#include <string>



int main()
{

    string nome, matricula;
    cout << " digite o seu nome: ";
    cin >> nome;
    cout << " digite a sua matricula: ";

    cin >> matricula;


    Aluno a(nome, matricula);

    //a.Aluno(nome, matricula);
    cout << " digite a sua nota: " << a.getNome() << endl;
    float n;
    cin >> n;
    a.setNota(n);
    a.informacoes();
    return 0;
}
