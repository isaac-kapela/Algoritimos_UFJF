#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

class Aluno{
public:
    Aluno(string nome, string cpf, string matricula);
    ~Aluno();

    string getNome();
    void setNome(string nome);
    string  getCpf();
    void setCpf(string cpf);
    string getMatricula();
    void setMatricula(string matricula);
    void removeNota(float valor);
    void adiconaNota(float valor);
    float calculaMedia();
    int quantosMaiorMedia();


private:
    string nome;
    string cpf;
    string matricula;
    NO* notas;
};



#endif // ALUNO_H_INCLUDED
