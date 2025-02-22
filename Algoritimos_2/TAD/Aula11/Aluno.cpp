#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{

    int n =7;

    for(int i =0; i <=n; i++)

    {
        cout << "digite a nota: " << i<< "° do aluno: " << endl;
        cin >> notas[i];
    }
}

double Aluno::calculaMedia()
{
    int n =7;

    int media =0;
    for(int i =0; i < n; i++)
    {
        media = media + notas[i];
    }

    return media/n;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}



// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

// Implemente aqui a sua solucao

void Aluno::setIdade(int val)
{
    idade = val;
}

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setMatricula(string m)
{
    matricula = m;
}

string Aluno::getMatricula()
{
    return matricula;
}

bool Aluno::lerFrenq()
{
    int n =7;
    cout << " digite: 1 para frenquente e digite: 0 para infrequente" << endl;

    for(int i =0; i < n; i++)
    {
        cin >> frequencia[n];
    }
}

void Aluno::imprimeDados()
{

    cout << nome << endl;
    cout <<  idade << endl;
    cout << matricula << endl;

    for(int i =0; i <= 7; i++)
    {
        if(frequencia[i] == true)
        {
            cout << " frequente" << endl;
        }

        if(notas[i] > = 60)
        {
            cout << "Aprovado" << endl;
        }
        else
        {
            cout <<"reprovado" << endl;
        }
    }
    else
    {
        cout << "infrequente" << endl;
    }
}

}
// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao


// ----------------------------------------------------------------------------
// Exercicio 5
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao


// ----------------------------------------------------------------------------
// Exercicio 6
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

