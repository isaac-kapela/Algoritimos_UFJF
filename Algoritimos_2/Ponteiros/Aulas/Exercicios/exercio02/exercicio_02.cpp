#include <iostream>

using namespace std;


int main()
{
   int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;
    pti = v;
    for(int i =0; i < 3; i++){
      *(v+i) = i+1;
    }
   
   for(int i =0; i<3; i++){
    cout << *(v+i)<< endl;
    }

    
    return 0;
}