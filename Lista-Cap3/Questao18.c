#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int numero, numero_invertido = 0;
    int leitura_valida;
    
    printf("--- Inversão de Dígitos ---\n");
    
    // Laço seguro com limpeza de buffer
    do {
        printf("Introduza um número inteiro positivo: ");
        leitura_valida = scanf("%d", &numero);
        
        // Limpa qualquer 'lixo' ou letra deixada no buffer do teclado
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
        if (leitura_valida != 1 || numero <= 0) {
            printf("Entrada inválida! Por favor, digite apenas números inteiros maiores que zero.\n\n");
        }
    } while (leitura_valida != 1 || numero <= 0);
    
    int temp = numero;
    while (temp > 0) {
        int ultimo_digito = temp % 10;
        numero_invertido = (numero_invertido * 10) + ultimo_digito;
        temp /= 10;
    }
    
    printf("\nO número %d invertido é: %d\n", numero, numero_invertido);
    
    return 0;
}