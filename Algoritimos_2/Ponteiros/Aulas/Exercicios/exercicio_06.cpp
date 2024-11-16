#include <iostream>
using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos)
{
    for (int i = 0; i < tam; i++)
    {
        if (vet[i] % 2 == 0)
        {
            *par = *par + 1;
        }
        else if (vet[i] % 2 != 0)
        {
            *impar = *impar + 1;
        }

        else if (vet[i] < 0)
        {
            *negativos = *negativos + 1;

            return true;
        }

        else
        {
            return false;
        }
    }
}
int main()

{

    int tam, par = 0, impar = 0, negativos = 0;
    cout << "Digite o tamanho do vetor: ";
    cin >> tam;
    int vet[tam];
    for (int i = 0; i < tam; i++)
    {
        cout << "Digite o valor da posicao " << i << ": ";
        cin >> vet[i];
    }

    func(tam, vet, &par, &impar, &negativos);

    cout << "Pares: " << par << endl;
    cout << "Impares: " << impar << endl;
    cout << "Negativos: " << negativos << endl;

    return 0;
}
