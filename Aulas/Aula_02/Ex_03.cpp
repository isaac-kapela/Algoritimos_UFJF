#include <iostream>
#include <iomanip>
using namespace std;

int leNumeroPositivo(int numero)
{
    // << "Informe o valor";
   

    if (numero > 0 )

    {
        return numero;
    }

    else
    {
        cout << "Tente novamente!\n";
        cin >> numero;

        if (numero > 0)
        {
           // cout << "ganhou" ;
            return numero;
        }
        else
        {
            cout << "ERRO! Valor invalido.\n";
            return 0;
        }
    }
}

int main()
{

    int valor;

    int resultado ;
     cin >> valor;

    resultado = leNumeroPositivo(valor);
    
    cout << "Valor retornado: "<< resultado;
 
    return 0;
}