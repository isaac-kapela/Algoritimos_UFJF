
#include <iostream>
#include <iomanip>

using namespace std;
void calculo()


{
    float salario;
      float numerofun, horasTrabalho, salarioHora;

    cout << "Digite o numero do seu cracha: " + "/n";
    cin >> numerofun;
      cout << "Digite a carga horaria: " + "/n";
    cin >> horasTrabalho;

    cout << " Digite o seu salario: " ;
    cin >> salarioHora;
     salario = horasTrabalho * salarioHora ;
   cout << "NUMBER " = numerofun <<  " \n SALARY" = salario;

}

int main()
{

  

    cout << fixed << setprecision(2);

    cout << calculo( );

    return 0;
}