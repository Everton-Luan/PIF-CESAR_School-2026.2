#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num, encontrou = 0;
    
    printf("--- Filtragem de Múltiplos de 3 e 5 ---\n");
    printf("Introduza um número limite inteiro e positivo: ");
    scanf("%d", &num);
    
    printf("\nMúltiplos de 3 e 5 no intervalo de 1 a %d:\n", num);
    
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("Nenhum número satisfaz a condição neste intervalo.");
    }
    printf("\n");
    
    return 0;
}