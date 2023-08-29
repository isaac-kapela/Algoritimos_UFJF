
#include <iostream>
#include <iomanip>

using namespace std;
float calculo(float numerofun, float horasTrabalho, float salarioHora)
{
    float salario;

    cout << "Digite o numero do seu cracha: ";
    cin >> numerofun;
    cout << " Digite o seu salario: ";
    cin >> salario;
    cout << "Digite a carga horaria: ";
    cin >> horasTrabalho;

    return horasTrabalho / salario;
}

int main()
{

    float numerofun, horasTrabalho, salarioHora;

    cout << fixed << setprecision(2);

    cout << calculo(numerofun, horasTrabalho, salarioHora);

    return 0;
}