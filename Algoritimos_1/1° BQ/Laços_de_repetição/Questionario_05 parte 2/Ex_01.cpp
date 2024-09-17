
#include <iomanip>
#include <iostream>

using namespace std;

void impar(int x)
{
    for (int i = 1; i <= x; i++)

    {

        if (i % 2 != 0 )
        {
            cout << i <<endl;
        }
    }
}

int main()
{
    int x;
    cin >> x;

    if (x > 0 && x <= 1000)
    {

        impar(x);
    }

    else
    {
        cout << "Valor informado fora do intervalo";
    }

    return 0;
}