#include <iostream>
using namespace std;

int somatorio(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + somatorio(n - 1);
    }
}

int main()
{
    int n;
    cin >> n;
    cout << somatorio(n) << endl;

    return 0;
}