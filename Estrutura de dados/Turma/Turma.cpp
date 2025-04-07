#include "Turma.h"
#include "Aluno.h"


void Turma::adicionarAluno(Aluno* aluno){
   Aluno* aux = this->alunos;
    while(aux->prox != nullptr){
        aux = aux->prox
    }
    aux->prox = aluno;
}

Aluno* Aluno::buscarAluno(string matricula){
        Aluno* aux = this->alunos;
        while(aux != nullptr){
            if(matricula == aux->getMatricula()){
                return aux;
            }

        }
        return nullptr;
}


