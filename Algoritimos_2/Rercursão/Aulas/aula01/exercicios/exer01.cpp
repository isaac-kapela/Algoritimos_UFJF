#include <iostream>
#include <iomanip>
using namespace std;

int fatorial(int n){

        if(n == 1 || n == 0){
            return 1;
        }
        else{
            return n * fatorial(n-1);
        }
    }


int main(){

    int n;
    cin >> n;

    int fat = fatorial(n);
    cout << "fatorial: " << fat << endl;
    
    return 0;
}