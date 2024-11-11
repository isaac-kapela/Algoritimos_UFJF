#include <iostream>

using namespace std;


int main()
{
   int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;
    int v[99];

    pti = &a;

    *pti = *(v) + 99;

 

    cout << *pti;
    
    return 0;
}