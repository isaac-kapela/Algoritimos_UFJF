#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "ALGORITMOS II - AULA PRATICA 11\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "202365123AB");

    // leitura das notas do aluno
    a.leNotas();
    // calculo da media do aluno
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    cout << "digite a idade do aluno: " << endl;
    int idade;
    cin>> idade;
    a.setIdade(idade);
    cout << " digite a matricula do aluno: " ;
    string matricula;
    cin >> matricula;
    a.setMatricula(matricula);

    a.lerFrenq();
    a.imprimeDados();

    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);
    Prova *p = new Prova(3);
    P->leNotas();
    p->calculaNotaFinal();
    cout << "nota final: " << p->obtemNotaFinal()<< endl;

    delete p;

    return 0;
}
