#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    printf("--- Tabela ASCII (Caracteres Imprimíveis 32 a 126) ---\n");
    printf("Decimal\tHex\tCaractere\n");
    printf("---------------------------\n");
    
    for (int i = 32; i <= 126; i++) {
        // %X formata para hexadecimal maiúsculo, %c imprime o caractere visual
        printf("%d\t%X\t%c\n", i, i, i);
    }
    
    return 0;
}