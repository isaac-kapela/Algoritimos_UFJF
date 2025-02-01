#include "Aluno.h"
#include <iostream>
#include <string>
#include "Aluno.h"


    Aluno::Aluno(string n, string m){
        nome = n;
        matricula = m;
    }

    Aluno::~Aluno(){
        cout << " Destruindo aluno: " << nome << endl;

    }

    float Aluno:: getNota(){
        return nota;
    }

    void Aluno::setNota(float valor){
    cout << "Alterando nota de aluno " << endl;
    nota = valor;
    }

   // void Aluno::setNome(string nomeNovo){
    //    cout << "alterando nome: ";
    //    n = nomeNovo;
   // }

    bool Aluno::verificaAprovado(){
        if(nota >= 60.00){
            return true;
        }
        else{
            return false;
        }
    }

    string Aluno::getNome(){
        return nome;
    }

    void Aluno::informacoes(){
        cout << "nome: " << nome << endl;
        cout << "Matricula: " << matricula<< endl;
        cout << "nota: " << nota << endl;

        if(verificaAprovado()){
            cout << "Situacao Aprovado." << endl;
        }
        else{
            cout << "Situacao Reprovado"  << endl;
        }
    }
