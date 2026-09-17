#include <stdio.h>

int main() {
    float salario_base;

    printf("Digite o valor do salario-base do funcionario (R$): ");
    scanf("%f", &salario_base);

    float salario_liquido = salario_base + (salario_base * 0.05) - (salario_base * 0.07);

    printf("Salario liquido a receber: R$ %.2f\n", salario_liquido);

    return 0;
}