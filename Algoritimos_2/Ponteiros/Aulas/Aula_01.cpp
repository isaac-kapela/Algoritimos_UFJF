#include <iostream>

using namespace std;

void func(int a, int b)
{
    cout << a + b << endl;
}

int main()
{
    int jota = 1;
    int jota2 = 3;
    int *b;
    int *a;

    a = &jota;
    *a = 2;

    b = &jota2;
    *b = 7;

    func(*a, *b);

    //     int var1;

    //     int *pont1;

    //     int m;
    //     var1 = 10;

    //     pont1 = &var1;
    //     *pont1 = 60;

    //     cout << var1 << endl;
    //    m = *pont1 *  *pont1;
    //     cout << m << endl;
    return 0;
}