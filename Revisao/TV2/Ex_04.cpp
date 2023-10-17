#include <iostream>
#include <iomanip>

using namespace std;

int func(int a, float b){
    int n =0;
    if(a/2.0 == b){
        while(n < a){
            cout << n << " ";
            n++;
        }
        return n;
    }
    else 
        cout << ".."<< endl;
    return 1;
}
int main(){
    cout << func(5,2.5) << endl;
    cout << func(4,1) << endl;
    return 0;
}
