#include <iomanip>
#include <iostream>
using namespace std;

float notas(float n1, float n2, float n3)

{
    float media = (n1 + n2 + n3) / 3;
    if (n1 < 0)
    {
        cout << "Valor invalido";
    }
    else if (n2 < 0)
    {
        cout << "Valor invalido";
    }
    else if (n3 < 0)
    {
        cout << "Valor invalido";
    }
    
    else if (media >= 6)
    {
        cout << "Aprovado!";
    }
    else if (media <= 6)
    {
        cout << "Reprovado!";
    }

    return media;
}

int main()
{
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    notas(n1, n2, n3);
    return 0;
}
