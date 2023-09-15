#include <iostream>
#include <iomanip>
using namespace std;

void musica(int genero, float miuntosTotal, int numeoMusicas)
{
    float media;
    // cout << "adcione as musicas";
    // cin >> numeoMusicas;
    media = miuntosTotal / numeoMusicas;
    // cin >> genero;

    if (genero == 1)
    {
        cout << "o genero é pop e a media de minutos da musica é: " << media;
    }
    else if (genero == 2)
    {
        cout << "o genero é k-pop e a media de minutos da musica é: " << media;
    }
    else if (genero == 3)
    {
        cout << "o genero é sertanejo e a media de minutos da musica é: " << media;
    }
    else if (genero == 4)
    {
        cout << "o genero é funk e a media de minutos da musica é: " << media;
    }
    else if (genero == 5)
    {
        cout << "o genero é samba e a media de minutos da musica é: " << media;
    }

    else
    {
        cout << "genero nao conhecido";
    }
}

int main()
{

    int genero, numeoMusicas;
    float miuntosTotal;
    cout << "adcione o genero da musica: ";
    cin >> genero;

    musica(genero, numeoMusicas, miuntosTotal);

    return 0;
}