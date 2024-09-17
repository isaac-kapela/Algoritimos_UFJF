#include <iomanip>
#include <iostream>
using namespace std;

float calculaPesoIdeal(float altura, char sexo)
{
    float pesoIdeal = 0;

    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else
    {
        cout << "O calculo do peso nao e possivel!" << endl;
    }

    return pesoIdeal;
}

int main()
{
    float altura, peso;
    char sexo;
    cin >> sexo >> altura >> peso;

    float pesoIdeal = calculaPesoIdeal(altura, sexo);

    if (pesoIdeal != 0)
    {
        cout << "PESO IDEAL: " << fixed << setprecision(4) << pesoIdeal << endl;
        if (peso > pesoIdeal)
        {
            cout << "A pessoa esta acima do peso ideal." << endl;
        }
        else if (peso < pesoIdeal)
        {
            cout << "A pessoa esta abaixo do peso ideal." << endl;
        }
        else
        {
            cout << "A pessoa esta no peso ideal." << endl;
        }
    }

    return 0;
}
