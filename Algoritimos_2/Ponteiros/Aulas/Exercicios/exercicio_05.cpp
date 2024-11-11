#include <iostream>
using namespace std;

void divisao(int num, int div, int *q, int *r){
    *q = num / div;
    *r = num % div;
}

int main()
{


    int num, div, q, r;
    cout << "Digite o dividendo: ";
    cin >> num;
    cout << "Digite o divisor: ";   
    cin >> div;

    divisao(num, div, &q, &r);

    cout<< q << " " << r << endl;
    

    return 0;
}