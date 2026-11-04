#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float lab, semestral, final, media;
    
    printf("Escreva a nota do Trabalho de Laboratório: ");
    scanf("%f", &lab);
    printf("Escreva a nota da Avaliação Semestral: ");
    scanf("%f", &semestral);
    printf("Escreva a nota do Exame Final: ");
    scanf("%f", &final);
    
    media = (lab * 2 + semestral * 3 + final * 5) / 10.0;
    printf("Sua média final é: %.2f\n", media);
    
    if (media >= 5.0) {
        printf("Situação: Aprovado\n");
    } else if (media >= 3.0) {
        printf("Situação: Em Recuperação\n");
    } else {
        printf("Situação: Reprovado\n");
    }
    return 0;
}