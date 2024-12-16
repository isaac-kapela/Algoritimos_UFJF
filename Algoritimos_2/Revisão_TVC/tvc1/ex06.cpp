#include <iostream>
#include <iomanip>
using namespace std;

int soma(int a, int b)
{
    if (a > b)
    {
        return 0;
    }
    else
    {
        return a + soma(a + 1, b);
    }
}

int main()
{

    return 0;
}