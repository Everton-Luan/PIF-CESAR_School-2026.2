#include <stdio.h>

int main() {
    int dias_trabalhados;

    printf("Digite o numero de dias uteis trabalhados pelo encanador: ");
    scanf("%d", &dias_trabalhados);

    float valor_bruto = dias_trabalhados * 30.0;
    float valor_liquido = valor_bruto * 0.92; 
    
    printf("Valor bruto devido:              R$ %.2f\n", valor_bruto);
    printf("Valor liquido a pagar (com IR):  R$ %.2f\n", valor_liquido);

    return 0;
}