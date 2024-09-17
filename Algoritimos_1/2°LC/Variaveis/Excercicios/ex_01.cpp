#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    float SM, SF;
    cout << "Digite o salario minimo: ";
    cin >> SM;
    cout << "Digite o seu salario: ";
    cin >> SF;
    cout << "Voce recebe " << setprecision(2) << SF / SM << " salarios minimos" << endl;
    return 0;
}