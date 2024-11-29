#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int *pt;
    cout << &pt << endl;
    int x;
    cin >> x;

    pt = &x;
    cout << pt << endl;
    cout << &x << endl;

    *pt = (*pt) * 10;

    cout << *pt << endl;

    pt = pt + 10;
    cout << pt << endl;

    return 0;
}