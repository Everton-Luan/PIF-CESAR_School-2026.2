#include <stdio.h>

int main() {
    int a, b;
    printf("Digite o primeiro numero (inteiro): ");
    scanf("%d", &a);

    printf("Digite o segundo numero (inteiro): ");
    scanf("%d", &b);

    printf("As operacoes basicas com %d e %d:\n", a, b);
    printf("    Soma: %d\n    Subtracao: %d\n    Multiplicacao: %d\n", a+b, a-b, a*b);
    printf("    Divisao: %.2f\n", (float)a / b);

    return 0;
}