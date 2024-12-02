#include <iomanip>
#include <iostream>
using namespace std;

int mdc(int m, int n)
{

    if (m < n)
    {
        return mdc(n, m);
    }
    else if (m % n == 0)
    {
        return n;
    }
    else
    {
        return mdc(n, m % n);
    }
}

int main()
{

    int m, n;
    cin >> m >> n;

    mdc(m, n);

    return 0;
}