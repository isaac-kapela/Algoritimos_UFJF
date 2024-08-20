#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string texto;
        int deslocamento;
        cin >> texto >> deslocamento;

        for (char &c : texto) {
            c = c - deslocamento;
            if (c < 'A') {
                c += 26;
            }
        }

        cout << texto << endl;
    }

    return 0;
}
