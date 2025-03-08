#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

class Paciente
{
public:
    Paciente(string n, int i);
    ~Paciente();
    int getIdade();
    void setCID(string codigo);
    void imprime();
private:
    string nome;
    string cid;
    int idade;
};


#endif // PACIENTE_H_INCLUDED
