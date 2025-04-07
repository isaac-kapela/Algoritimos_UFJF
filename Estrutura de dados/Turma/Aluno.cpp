#include "Aluno.h"

Aluno::Aluno(string nome, string cpf, string matricula)
{
    nome = nome;
    cpf = cpf;
    matricula = matricula;
    notas = new NO();
}

Aluno::~Aluno()
{
    delete [] notas;
}

void Aluno::getNome()
{
    return nome;
}
void Aluno::getCpf()
{
    return cpf;
}
void Aluno::getMatricula()
{
    return matricula;
}

string Aluno::setCpf(string cpf)
{
    cpf = cpf;
}
string Aluno::setMatricula(string matricula)
{
    matricula = matricula;
}

string Aluno::setNome(string nome)
{
    nome = nome;
}

void Aluno::adiconaNota(float valor)
{
    NO* aux = this->notas;
    while(aux->prox != nullptr)
    {
        aux = aux->prox;
    }
    NO* novo = new NO();
    novo->nota = valor;
    prox->aux = novo;
}

void Aluno::removeNota(float valor)
{
    NO* aux = this->notas;
    NO* ant = nullptr;
    while(aux->prox !=nullptr)
    {
        if(aux->nota == valor)
        {
            ant->prox = aux->prox;
            delete aux;
            return;
        }
        ant = aux;
        aux = aux->prox;
    }

}

float Aluno::calculaMedia()
{
    NO* aux = this->notas;
    float soma =0;
    int i =0;
    while(aux != nullptr)
    {
        soma = soma+aux->valor;
        i++;
        aux = aux->prox;

    }
    return soma/i;
}


