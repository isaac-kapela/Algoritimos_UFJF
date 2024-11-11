#include <iostream>

using namespace std;


int main()
{
   int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

        pti1= &c;
        pti2 = &c;

        a = *pti1;
        b = *pti2;
        

        cout << *pti1 << endl;
        cout << *pti2 << endl;
    
    return 0;
}