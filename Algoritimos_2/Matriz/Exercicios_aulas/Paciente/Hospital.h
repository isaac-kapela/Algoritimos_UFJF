#ifndef HOSPITAL_H_INCLUDED
#define HOSPITAL_H_INCLUDED
#define max 60


class Hospital
{
public:
    Hospital();
    ~Hospital();
    void novoPaciente(string nome, int idade, string cid);
    void listaPacientesRisco();
private:
    int n;
    Paciente* pacientes[max];
};


#endif // HOSPITAL_H_INCLUDED
