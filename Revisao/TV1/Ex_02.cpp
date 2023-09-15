#include <iostream>
#include <iomanip>
using namespace std;

bool Par(int valor_1, int valor_2)
{

    if ((valor_1 % 2 == 0) && valor_2 % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a, b, resultado;
    cin >> a >> b;
    resultado = Par(a, b);

    return 0;
}