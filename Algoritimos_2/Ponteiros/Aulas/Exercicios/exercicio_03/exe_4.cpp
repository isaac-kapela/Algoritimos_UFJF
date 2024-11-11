

#include <iostream>

using namespace std;

int main()
{
    int x = 23;
    float y = 9.7;
    float *pt2;

    int *pt1;

    pt2 = &y;
    pt1 = &x;

    cout << (*pt1) + (*pt2);

    return 0;
}