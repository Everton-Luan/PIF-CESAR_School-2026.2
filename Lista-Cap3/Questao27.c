#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int valor, temp_valor;
    int c100 = 0, c50 = 0, c20 = 0, c10 = 0, c5 = 0, c2 = 0;
    int leitura_valida;
    
    printf("--- Simulador de Caixa Eletrônico ---\n");
    
    do {
        printf("Digite o valor desejado para saque (R$): ");
        leitura_valida = scanf("%d", &valor);
        
        // Limpa o buffer do teclado
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
        if (leitura_valida != 1 || valor <= 0) {
            printf("Valor inválido! Digite um número inteiro positivo.\n\n");
        }
    } while (leitura_valida != 1 || valor <= 0);
    
    temp_valor = valor; 
    
    while (temp_valor >= 100) { temp_valor -= 100; c100++; }
    while (temp_valor >= 50)  { temp_valor -= 50;  c50++; }
    while (temp_valor >= 20)  { temp_valor -= 20;  c20++; }
    while (temp_valor >= 10)  { temp_valor -= 10;  c10++; }
    while (temp_valor >= 5)   { temp_valor -= 5;   c5++; }
    while (temp_valor >= 2)   { temp_valor -= 2;   c2++; }
    
    if (temp_valor > 0) {
        printf("\nNão é possível entregar este valor exato usando apenas as cédulas disponíveis (restou R$ %d).\n", temp_valor);
    } else {
        printf("\nSaque de R$ %d aprovado! Quantidade de cédulas:\n", valor);
        if (c100 > 0) printf("%d nota(s) de R$ 100\n", c100);
        if (c50 > 0)  printf("%d nota(s) de R$ 50\n", c50);
        if (c20 > 0)  printf("%d nota(s) de R$ 20\n", c20);
        if (c10 > 0)  printf("%d nota(s) de R$ 10\n", c10);
        if (c5 > 0)   printf("%d nota(s) de R$ 5\n", c5);
        if (c2 > 0)   printf("%d nota(s) de R$ 2\n", c2);
    }
    
    return 0;
}