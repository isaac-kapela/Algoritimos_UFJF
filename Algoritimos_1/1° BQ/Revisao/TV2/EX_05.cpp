#include <iostream>
#include <iomanip>

using namespace std;

float fun(int R)
{
    int cont =1;
    float soma = 0;
    float valor;
    float media;
    cin >> valor;
    

    while (valor > R)
    {
        
        cin >> valor;
         soma += valor;
        cont++;
    }

    media = soma / cont;

    return media;
}

    void func()
    {
        int tolerancia;
        cin >> tolerancia;

        for (int i = 0; i > tolerancia; i++)
        {
            cout << fun(tolerancia);
        }
    }
