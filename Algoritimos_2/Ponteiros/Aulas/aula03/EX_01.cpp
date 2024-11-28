#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    float soma =0;
   
    cin>>n;
    int *vet = new  int [n];
    

    for(int i =0; i < n; i++){
        cin >> vet[i];
        soma = soma + vet[i];
    }
    cout << soma/n;
 
delete [] vet;
    return 0;
}
