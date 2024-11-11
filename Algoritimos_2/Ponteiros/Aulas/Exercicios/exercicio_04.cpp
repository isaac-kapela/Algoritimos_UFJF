#include <iostream>
using namespace std;

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
   int a,b;

   cin >> a >> b;
   cout << "a = " << a << " b = " << b << endl;

    troca(&a, &b);

    cout << "a = " << a << " b = " << b << endl;


    return 0;
}