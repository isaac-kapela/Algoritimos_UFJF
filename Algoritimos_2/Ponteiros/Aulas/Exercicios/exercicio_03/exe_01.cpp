#include <iostream>

using namespace std;


int main()
{
   int x = 23;
    float y = 9.7;
    int *pt1;
    pt1 = &x;

    

    *pt1 = *pt1 + 1;
    
    return 0;
}