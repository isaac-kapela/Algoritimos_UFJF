#include <iostream>
#include <iomanip>
using namespace std;


void sequencia(int x, int y){
    while(x <= y){
        x++;
    
        cout << x << " ";  
    }
    
}



int main(){
    int x, y;
    cout << "Digite o valor de x: ";
    cin >> x;
    cout << "Digite o valor de y: ";
    cin >> y;
    sequencia(x, y);
    return 0;
}
