#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n, divisores = 0;
    
    printf("--- Teste de Primalidade ---\n");
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }
    
    printf("\nAnálise concluída. Foram encontrados %d divisores.\n", divisores);
    if (divisores == 2) {
        printf("Conclusão: O número %d é PRIMO.\n", n);
    } else {
        printf("Conclusão: O número %d NÃO É PRIMO.\n", n);
    }
    
    return 0;
}