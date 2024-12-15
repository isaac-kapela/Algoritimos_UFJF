#include <iostream>
using namespace std;

int* removeVal(int vet[], int n, int val, int* t) {
    *t = 0;
    for (int i = 0; i < n; i++) {
        if (vet[i] != val) {
            (*t)++;
        }
    }

    if (*t == 0) return NULL;

    int* vet2 = new int[*t];
    for (int i = 0; i < n; i++) {
        if (vet[i] != val) {
            vet2[i] = vet[i];
        }
    }

    return vet2;
}

int main() {
    int n, val;
    cin >> n >> val;

    int* vet = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    int t;
    int* novoVet = removeVal(vet, n, val, &t);

    if (novoVet == NULL) {
        cout << "NULL" << endl;
    } else {
        for (int i = 0; i < t; i++) {
            cout << novoVet[i] << " ";
        }
        cout << endl;
    }

    delete[] vet;
    delete[] novoVet;

    return 0;
}
