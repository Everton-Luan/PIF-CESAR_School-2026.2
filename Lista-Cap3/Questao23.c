#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int l;
    
    printf("--- Desenho de Quadrado Vazado ---\n");
    do {
        printf("Digite a dimensão do lado L (entre 3 e 20): ");
        scanf("%d", &l);
        if (l < 3 || l > 20) {
            printf("Valor inválido! Tente novamente.\n");
        }
    } while (l < 3 || l > 20);
    
    printf("\n");
    for (int i = 1; i <= l; i++) {
        for (int j = 1; j <= l; j++) {
            // Imprime 'X' apenas nas bordas (primeira e última linha/coluna)
            if (i == 1 || i == l || j == 1 || j == l) {
                printf("X");
            } else {
                printf(" "); // Meio vazio
            }
        }
        printf("\n");
    }
    
    return 0;
}