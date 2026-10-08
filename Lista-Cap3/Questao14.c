#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    long long int soma_quadrados = 0;
    
    printf("--- Sequência de Quadrados de 1 a 100 ---\n");
    
    for (int i = 1; i <= 100; i++) {
        long long int quadrado = i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_quadrados += quadrado;
    }
    
    printf("\nResultado Final: A soma total dos quadrados é %lld\n", soma_quadrados);
    
    return 0;
}