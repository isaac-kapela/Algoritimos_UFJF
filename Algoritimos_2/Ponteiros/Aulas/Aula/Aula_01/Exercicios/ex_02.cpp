#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    int val = 10;
    int *ptr;
    ptr = &val;

    cout  << "valor de val: " << val << endl;
    cout << "Enderco de val:" << &val<< endl;
    cout << "valor de ptr: " << ptr << endl;
    cout << "valor apontado por ptr:" << *ptr << endl;

    *ptr = 15;
    int *ptr2 = ptr;

    cout << "valor de ptr2: " << ptr2 << endl;
    cout << "valor apontado por ptr2: " << *ptr2 << endl;
    cout << "valor de val: " << val << endl;

    return 0;
}