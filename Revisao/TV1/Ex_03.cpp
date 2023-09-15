# include <iostream>
# include <iomanip>
using namespace std;

void compra(float unitario, float total){
    float quantidade;
    quantidade = total/unitario;
    if(quantidade =! 0){
        cout << quantidade;
    }
    else {
        cout << "Zero produtos";
    }

}

int main() {

}