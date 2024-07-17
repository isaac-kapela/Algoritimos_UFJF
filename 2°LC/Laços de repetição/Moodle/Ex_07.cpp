#include <iostream>

int main() {
    const int NUM_MESES = 6;
    double vendas[NUM_MESES];

    std::cout << "Digite o valor das vendas para cada um dos 6 meses:" << std::endl;
    for (int i = 0; i < NUM_MESES; ++i) {
        std::cin >> vendas[i];
    }

    for (int i = 0; i < NUM_MESES; ++i) {
        if (vendas[i] > 10000) {
            std::cout << "Acima da meta" << std::endl;
        } else if (vendas[i] < 5000) {
            std::cout << "Abaixo da meta" << std::endl;
        } else {
            std::cout << "Dentro da meta" << std::endl;
        }
    }

    return 0;
}
