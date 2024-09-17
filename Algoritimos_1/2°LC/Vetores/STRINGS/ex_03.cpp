#include <iostream>
#include <cstring> 
using namespace std;

void copiarInvertido(char strA[], const char strB[], int k) {
    int n = strlen(strB); 
    if (k > n) {
        k = n;
    }

    for (int i = 0; i < k; i++) {
        strA[i] = strB[k - 1 - i];
    }

    strA[k] = '\0'; 
}

int main() {
    char strA[30], strB[30];
    int k;

    cin >> strB >> k;

    copiarInvertido(strA, strB, k);

    cout << strA << endl;

    return 0;
}
