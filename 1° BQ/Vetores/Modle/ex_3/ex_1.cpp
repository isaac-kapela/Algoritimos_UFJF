#include <iostream>
#include <iomanip>
#include <string>

// Função que calcula o salário total do vendedor
double calcularSalarioTotal(const std::string& nome, double salarioFixo, double vendas) {
    const double porcentagemBonificacao = 0.15;
    double bonificacao = vendas * porcentagemBonificacao;
    double salarioTotal = salarioFixo + bonificacao;

    std::cout << "O salario de " << nome << " sera de R$ " << std::fixed << std::setprecision(2) << salarioTotal << std::endl;

    return salarioTotal;
}

int main() {
    // Solicita ao usuário as informações do vendedor
    std::string nome;
    double salarioFixo, vendas;

   // std::cout << "Informe o nome do vendedor: ";
    std::getline(std::cin, nome);

    //std::cout << "Informe o salario fixo do vendedor: ";
    std::cin >> salarioFixo;

   // std::cout << "Informe o total de vendas do vendedor: ";
    std::cin >> vendas;

    // Chama a função para calcular o salário total e exibir o resultado
    calcularSalarioTotal(nome, salarioFixo, vendas);

    return 0;
}
