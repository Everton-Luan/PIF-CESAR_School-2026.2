#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o preco do metro de arame farpado (R$): ");
    scanf("%f", &preco_metro);

    float perimetro = 2 * (comprimento + largura);
    float total_arame = perimetro * 3;
    float custo_total = total_arame * preco_metro;

    printf("\n=== RESUMO DO ORCAMENTO ===\n");
    printf("Metros de arame necessarios (3 voltas): %.2f m\n", total_arame);
    printf("Custo total da compra:                 R$ %.2f\n", custo_total);

    return 0;
}