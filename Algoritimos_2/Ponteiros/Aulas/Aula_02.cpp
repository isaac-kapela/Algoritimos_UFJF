#include <iostream>

using namespace std;

int main() {

    int var1;

    int *pont1;
    var1 = 10;

    pont1 = &var1;
    *pont1 = 60;

    cout << var1 << endl;
    cout << *pont1;
    return 0;
}