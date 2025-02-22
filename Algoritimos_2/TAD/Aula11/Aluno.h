#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
public:
    Aluno(string n, string m);
    ~Aluno();

    // exercicio 1
    void leNotas();
    double calculaMedia();

    // operacoes
    void setNome(string n);
    string getNome();
    void setIdade(int val);
    int getIdade();
    void setMatricula(string m);
    string getMatricula();


    // exercicio 2
    // implemente aqui

    // exercicio 5
    // implemente aqui
    bool lerFrenq();

    void imprimeDados();

    // exercicio 6
    // implemente aqui

private:
    int idade;
    string nome, matricula;
    double notas[7];
    bool frequencia[7];

    // exercicio 3
    // implemente aqui

    // exercicio 4
    // implemente aqui
};

#endif // ALUNO_H
