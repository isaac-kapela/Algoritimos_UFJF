#include <iomanip>
#include <iostream>

using namespace std;

void divisao(int num, int div, int *q, int *r)
{
    *r = num % div;
    *q = num / div;
}

int main()
{

    int num, div, q, r;

    cin >> num >> div;
    divisao(num, div, &q, &r);

    cout << "Resto: " << r << " quociente: " << q;

    return 0;
}