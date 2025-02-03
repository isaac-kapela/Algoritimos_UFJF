#include <iostream>

using namespace std;
#include "Aluno.h"

Aluno::Aluno()
{

}

Aluno::~Aluno()
{
    if(notas)
    {
        delete[] notas;
    }

}

void Aluno::definirAluno()
{

    cout << "Digite a matricula do aluno: ";
    cin >> matricula ;
    cout << "Digite a idade do aluno: ";
    cin >> idade;
    cout << "digite a quant de notas" << endl;
    cin >> n;
    if(notas)
    {
        delete[] notas;
    }
    notas = new double[n];
    for(int i =0; i < n; i++)
    {
        cin>> notas[i];

    }

}

void Aluno::imprimirAluno()
{

    int notaFinal = calcularMedia();
    cout << " matricula: " << matricula << endl;
    cout << "idade: " <<idade << endl;
    cout << " nota: "<< notaFinal << endl;

    if(foiAprovado())
    {
        cout << "Aluno: Aprovado" << endl;
    }
    else
    {
        cout << "Aluno: Reprovado"<< endl;
    }

}
double Aluno::calcularMedia()
{
    int soma;
    for(int i =0; i < n; i++)
    {
        soma = soma + notas[i];
    }
    return soma/n;
}

bool Aluno::foiAprovado()
{
    if(calcularMedia() >= 60)
    {
        return true;
    }
    else
    {
        return false;
    }
}
