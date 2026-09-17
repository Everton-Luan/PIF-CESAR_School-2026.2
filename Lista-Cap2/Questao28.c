#include <stdio.h>

int main() {
    int horas_normais, horas_extras;

    printf("Digite o total de horas NORMAIS trabalhadas no ano: ");
    scanf("%d", &horas_normais);

    printf("Digite o total de horas EXTRAS trabalhadas no ano: ");
    scanf("%d", &horas_extras);

    float bruto = (horas_normais * 10.0) + (horas_extras * 15.0);
    float imposto = (bruto > 12000.0) ? (bruto - 12000.0) * 0.10 : 0.0;

    printf("\n=== DEMONSTRATIVO SALARIAL ANUAL ===\n");
    printf("Salario bruto total:   R$ %.2f\n", bruto);
    printf("Imposto retido (10%%):  R$ %.2f\n", imposto);
    printf("Salario liquido final: R$ %.2f\n", bruto - imposto);

    return 0;
}