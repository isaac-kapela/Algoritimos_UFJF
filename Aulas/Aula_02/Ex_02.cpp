
#include <iostream>
#include <iomanip>
using namespace std;

int  boletin(int nota1, int nota2, int nota3)
{

    cin >> nota1 >> nota2 >> nota3;
    //int lerMatricua;
    int media;
    media = nota1 + nota2 + nota3 / 3;

    if (media >= 7)
    {
        cout << "Aprovado";

        return media;
    }
    else if (media <= 5)
    {
        cout << "reprovado";
        return media;
    }
    else
    {
        cout << "Recuperacao";
    }
}
int main()
{
    
    int nota1, nota2, nota3;
     boletin(nota1, nota2, nota3);


    return 0;
}
