#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int a, b;
    
    printf("--- Intervalo Numérico ---\n");
    printf("Digite o primeiro número inteiro (A): ");
    scanf("%d", &a);
    printf("Digite o segundo número inteiro (B): ");
    scanf("%d", &b);
    
    printf("\nNúmeros no intervalo entre %d e %d:\n", a, b);
    
    if (a <= b) {
        // Ordem crescente
        for(int i = a; i <= b; i++) {
            printf("%d ", i);
        }
    } else {
        // Ordem decrescente
        for(int i = a; i >= b; i--) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}