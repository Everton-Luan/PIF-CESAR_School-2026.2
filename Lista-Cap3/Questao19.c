#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n;
    long long int anterior = 1, atual = 1, proximo;
    
    printf("--- Sequência de Fibonacci ---\n");
    printf("Introduza o número do termo desejado (N): ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("\nPor favor, introduza um valor maior que 0.\n");
        return 1;
    }
    
    printf("\nOs primeiros %d termos da sequência de Fibonacci são:\n", n);
    
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            printf("1 ");
            if (i == n) proximo = 1; 
        } else {
            proximo = anterior + atual;
            printf("%lld ", proximo);
            anterior = atual;
            atual = proximo;
        }
    }
    
    printf("\n\nO %dº termo da sequência é: %lld\n", n, (n <= 2) ? 1LL : proximo);
    
    return 0;
}