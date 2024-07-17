#include <iostream>

int main() {
    int n;

    std::cout << "Digite um número inteiro: ";
    std::cin >> n;

    for (int i = 0; i <= n; ++i) {
        std::cout << i << " x 3 = " << i * 3 << std::endl;
    }

    return 0;
}
