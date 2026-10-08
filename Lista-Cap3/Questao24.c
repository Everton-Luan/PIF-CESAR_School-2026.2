#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n;
    int leitura_valida;
    
    printf("--- Padrão Visual em X ---\n");
    do {
        printf("Digite uma dimensão ímpar N (entre 3 e 19): ");
        leitura_valida = scanf("%d", &n);
        
        // Limpa o buffer do teclado
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
        if (leitura_valida != 1 || n < 3 || n > 19 || n % 2 == 0) {
            printf("Valor inválido! Certifique-se de digitar um número ímpar entre 3 e 19.\n\n");
        }
    } while (leitura_valida != 1 || n < 3 || n > 19 || n % 2 == 0);
    
    printf("\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j || i + j == n + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}