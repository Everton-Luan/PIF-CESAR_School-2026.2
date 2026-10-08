#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n;
    long long int fatorial = 1;
    
    printf("--- Cálculo de Fatorial ---\n");
    printf("Introduza um número inteiro (N): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("\nErro: Não existe fatorial de um número negativo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("\nResultado: O fatorial de %d (%d!) é %lld\n", n, n, fatorial);
    }
    
    return 0;
}