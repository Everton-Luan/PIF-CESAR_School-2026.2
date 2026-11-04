#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int horas;
    float valor_total = 0.0;

    printf("Escreva o número de horas inteiras no estacionamento: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo inválido.\n");
    } else {
        if (horas >= 1) valor_total += 2.00;
        if (horas >= 2) valor_total += 2.00;
        if (horas >= 3) valor_total += 2.50;
        if (horas >= 4) valor_total += 2.50;
        if (horas > 4) {
            valor_total += (horas - 4) * 3.00;
        }
        printf("Tempo total: %d hora(s)\n", horas);
        printf("Valor final cobrado: R$ %.2f\n", valor_total);
    }
    return 0;
}