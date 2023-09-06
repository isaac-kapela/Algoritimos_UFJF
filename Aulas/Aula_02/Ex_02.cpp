
#include <iostream>
#include <iomanip>
using namespace std;

void boletin()
{
    float nota1, nota2, nota3;
    float media;

    int lerMatricula;
    cin >> lerMatricula;
    cout << lerMatricula;

    cin >> nota1 >> nota2 >> nota3;
    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7)
    {
        cout << " Aprovado";

        //  return media;
    }
    else if (media <= 5)
    {
        cout << " Reprovado";
        //  return media;
    }
    else
    {
        cout << " Recuperacao";

        //   return media;
    }
}
int main()
{
    // int resultado;
    boletin();

    //   boletin(nota1, nota2, nota3);

    return 0;
}
