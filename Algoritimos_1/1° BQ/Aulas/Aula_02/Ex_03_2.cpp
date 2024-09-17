#include <iostream>
#include <iomanip>
using namespace std;

void leNumeroPositivo(int numero)
{
    switch (numero)
    {
    case 5 ... 7:

        cout << "categoria infatil A";

        break;

    case 8 ... 10:
        cout << "categoria infatil B";

        break;

    case 11 ... 13:

        cout << "categoria juvenil A";

        break;


     case 14 ... 17:

        cout << "categoria juvenil B";

        break;

        case 18 ... 30:

        cout << "Adulto";

        break;

            case 31 ... 122:

        cout << "Senior";

        break;


    default:
        cout << "Não a categorias";
        break;
    }
}


    int main (){

        int idade;
        cin >> idade;
        leNumeroPositivo(idade);

        return 0;
    }
