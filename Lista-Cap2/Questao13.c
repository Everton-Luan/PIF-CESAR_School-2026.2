#include <stdio.h>

int main() {
    int opcao;
    float lado, base, altura;

    printf("=== CALCULADORA DE AREAS ===\n");
    printf("1 - Quadrado\n");
    printf("2 - Retangulo\n");
    printf("3 - Triangulo Retangulo\n");
    printf("Escolha uma opcao (1-3): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite o lado (L) do quadrado: ");
            scanf("%f", &lado);
            printf("Area do Quadrado: %.2f\n", lado * lado);
            break;

        case 2:
            printf("Digite a base (B) e a altura (H) do retangulo: ");
            scanf("%f %f", &base, &altura);
            printf("Area do Retangulo: %.2f\n", base * altura);
            break;

        case 3:
            printf("Digite a base (B) e a altura (H) do triangulo: ");
            scanf("%f %f", &base, &altura);
            printf("Area do Triangulo Retangulo: %.2f\n", (base * altura) / 2.0);
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    return 0;
}