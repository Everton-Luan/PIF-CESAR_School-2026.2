#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float valor, preco_final;
    int estado;

    printf("Escreva o valor do produto: R$ ");
    scanf("%f", &valor);
    printf("Escreva o código do estado (1=MG, 2=SP, 3=RJ, 4=MS): ");
    scanf("%d", &estado);

    switch (estado) {
        case 1: preco_final = valor * 1.07; printf("Preço final (MG): R$ %.2f\n", preco_final); break;
        case 2: preco_final = valor * 1.12; printf("Preço final (SP): R$ %.2f\n", preco_final); break;
        case 3: preco_final = valor * 1.15; printf("Preço final (RJ): R$ %.2f\n", preco_final); break;
        case 4: preco_final = valor * 1.08; printf("Preço final (MS): R$ %.2f\n", preco_final); break;
        default: printf("Erro: Código de estado inválido!\n"); break;
    }
    return 0;
}