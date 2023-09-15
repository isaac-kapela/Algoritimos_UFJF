#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    if ((a > b && a > 0) || (b < a && b < 0))
    {
        cout << "Valores permitidos";
    }
    else
    {
        cout << "tente de novo";
    }

    return 0;
}
