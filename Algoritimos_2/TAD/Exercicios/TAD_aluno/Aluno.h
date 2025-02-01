#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED
#include <string>
using namespace std;
class Aluno{
    public:
        Aluno(string n, string m);
        ~Aluno();

        void informacoes();
        float getNota();
        string getNome();
        //void setNome(string nomeNovo);
        void setNota(float valor);
        bool verificaAprovado();

    private:
        string nome;
        string matricula;
        float nota;

};

#endif // ALUNO_H_INCLUDED
