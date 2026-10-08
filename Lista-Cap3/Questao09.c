#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float valor, soma = 0.0;
    int contador = 0;
    
    printf("--- Acumulador de Valores (Digite um número negativo para sair) ---\n");
    
    while (1) {
        printf("Digite um valor real positivo: ");
        scanf("%f", &valor);
        
        if (valor < 0) {
            printf("Valor negativo (%.2f) detectado. Encerrando leitura...\n\n", valor);
            break;
        }
        
        soma += valor;
        contador++;
    }
    
    if (contador > 0) {
        printf("--- Resultados ---\n");
        printf("Quantidade de valores digitados: %d\n", contador);
        printf("Soma total: %.2f\n", soma);
        printf("Média aritmética: %.2f\n", soma / contador);
    } else {
        printf("Nenhum valor válido foi digitado.\n");
    }
    
    return 0;
}