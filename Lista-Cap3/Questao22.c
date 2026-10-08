#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n, contador = 1;
    
    printf("--- Triângulo de Floyd ---\n");
    printf("Digite o número de linhas desejado (N): ");
    scanf("%d", &n);
    
    printf("\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n"); // Quebra a linha ao fim de cada nível
    }
    
    return 0;
}