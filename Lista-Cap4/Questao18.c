#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int opcao;
    float temp, convertida;

    printf("Menu de Conversão:\n");
    printf("1. Celsius para Fahrenheit\n2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n4. Kelvin para Celsius\n");
    printf("Escreva a opção desejada (1-4): ");
    scanf("%d", &opcao);
    printf("Escreva a temperatura: ");
    scanf("%f", &temp);

    switch (opcao) {
        case 1: convertida = temp * 1.8 + 32; printf("Resultado: %.2f F\n", convertida); break;
        case 2: convertida = temp + 273.15; printf("Resultado: %.2f K\n", convertida); break;
        case 3: convertida = (temp - 32) / 1.8; printf("Resultado: %.2f C\n", convertida); break;
        case 4: convertida = temp - 273.15; printf("Resultado: %.2f C\n", convertida); break;
        default: printf("Erro: Opção inválida!\n"); break;
    }
    return 0;
}