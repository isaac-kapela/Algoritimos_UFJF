#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

void pontencia(int x, int n)
{
    if (n == 0)
    {
        cout << 1 << endl;
    }
    else if (n > 0)
    {
        cout << x * pow(x, n - 1);
    }
}

int main()
{

    int x, n;
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de n: ";
    cin >> n;
    pontencia(x, n);

    return 0;
}