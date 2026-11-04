#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int numero;
    
    printf("Escreva um número inteiro: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é PAR ", numero);
    } else {
        printf("O número %d é ÍMPAR ", numero);
    }
    
    if (numero > 0) {
        printf("e POSITIVO.\n");
    } else if (numero < 0) {
        printf("e NEGATIVO.\n");
    } else {
        printf("e é ZERO.\n");
    }
    return 0;
}