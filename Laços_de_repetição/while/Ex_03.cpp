#include <iostream>
#include <iomanip>
using namespace std;

int intervalo(int n1, int n2)
{
    int contador = 0;

    while (contador <= n1 && contador <= n2)
    {
        cout << " digite os valores";
        cin >> n1 >> n2;

        if (n1 > n2)
        {
            contador++;
        }
        else
        {
            contador--;
        }
    }
}