#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float nota;
    int faltas;

    printf("Escreva a nota final do estudante (0.0 a 10.0): ");
    scanf("%f", &nota);
    printf("Escreva o número de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0) {
        printf("Conceito: %c\n", (faltas <= 20) ? 'A' : 'B');
    } else if (nota >= 7.5 && nota <= 8.9) {
        printf("Conceito: %c\n", (faltas <= 20) ? 'B' : 'C');
    } else if (nota >= 5.0 && nota <= 7.4) {
        printf("Conceito: %c\n", (faltas <= 20) ? 'C' : 'D');
    } else if (nota >= 4.0 && nota <= 4.9) {
        printf("Conceito: %c\n", (faltas <= 20) ? 'D' : 'E');
    } else if (nota >= 0.0 && nota <= 3.9) {
        printf("Conceito: E\n");
    } else {
        printf("Erro: Nota inválida!\n");
    }
    return 0;
}