#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
class Aluno
{
private:
    int matricula, idade;
    int n;
    double *notas;
public:
    Aluno();
    ~Aluno();
    void definirAluno();
    void imprimirAluno();
    double calcularMedia();
    bool foiAprovado();
};

#endif // ALUNO_H_INCLUDED
