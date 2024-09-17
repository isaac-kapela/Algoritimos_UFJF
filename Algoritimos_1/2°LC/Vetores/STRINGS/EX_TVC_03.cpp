#include <iostream>
using namespace std;
#define T 5

void func(int v1[], int v2[], int v3[], int v4[]) {
    int p;
    cin >> p;
    if (p > 0 && p < T - 1) {
        for (int i = 0; i <= p; i++) {
            v3[i] = v1[i];
            v4[i] = v2[i];
        }
        for (int i = p + 1; i < T; i++) {
            v3[i] = v2[i];
            v4[i] = v1[i];
        }
    } else {
        cout << "Valor invalido" << endl;
    }
}

int main() {
    int v1[T] = {1, 1, 1, 1, 1}, v2[T] = {0, 0, 0, 0, 0}, v3[T] = {0}, v4[T] = {0};

    func(v1, v2, v3, v4);

    for (int i = 0; i < T; i++) {
        cout << v3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < T; i++) {
        cout << v4[i] << " ";
    }

    return 0;
}
