#include <iostream>
#include <iomanip>
using namespace std;

bool Par(int v1, int v2){
    
    cin >> v1 >> v2;
    if( (v1 % 2 ==0 )  && v2 % 2 =! 0 ){
        cout << true;
    }

    else{
        cout<< false;
    }
}