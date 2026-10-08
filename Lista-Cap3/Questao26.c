#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int a, b;
    long long int soma = 0;
    
    printf("--- Soma de Números Primos em um Intervalo ---\n");
    do {
        printf("Digite o valor de A: ");
        scanf("%d", &a);
        printf("Digite o valor de B (B deve ser maior que A): ");
        scanf("%d", &b);
        if (a >= b || a <= 0) {
            printf("Erro: Certifique-se de que A é positivo e menor que B.\n\n");
        }
    } while (a >= b || a <= 0);
    
    printf("\nNúmeros primos encontrados no intervalo [%d, %d]:\n", a, b);
    
    for (int i = a; i <= b; i++) {
        int divisores = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) divisores++;
        }
        if (divisores == 2) {
            printf("%d ", i);
            soma += i;
        }
    }
    
    printf("\n\nA soma total dos primos encontrados é: %lld\n", soma);
    
    return 0;
}