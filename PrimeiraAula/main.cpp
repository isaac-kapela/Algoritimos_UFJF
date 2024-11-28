#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1;
    getline(cin, str1);

  int   tamanho = str1.size();

    cout << str1[0] << " " << tamanho;

    return 0;
}
