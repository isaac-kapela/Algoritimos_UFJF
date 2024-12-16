#include <iomanip>
#include <iostream>
using namespace std;

 int modulo(int x, int y){
    if(x=y){
        return 0;
    }

    else if (x < y){
        return x;
    }
    else if(x > y){
        return modulo(x-y, y);

    }

}

int main(){

    return 0;
}