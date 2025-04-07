#ifndef TURMA_H_INCLUDED
#define TURMA_H_INCLUDED
class Turma
{
public:
    void adicionarAluno(Aluno* aluno);
    void removeAluno(Aluno* aluno);
    Aluno* buscarAluno(string matricula);
    void removeNota(float valor);
    void imprime();
    float MediaTurma();
    int qtsAlunosAcimaMedia();
    float medianaTurma();

private:
    Aluno* alunos;

};


#endif // TURMA_H_INCLUDED
