# include <iostream>

using namespace std;


int main(){
    int val;
    cin >> val;
    
    while(val != -1){
        cout << val << endl;
        cin >> val;
    }
    
    for (int i = 100; i >= 0; i--){
        cout << i << endl;
    }
    for (int i = 0; i <= 100; i++){
        cout << i << endl;
    }
    return 0;
}