#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int idade, tempo_servico;

    printf("Escreva a idade do trabalhador: ");
    scanf("%d", &idade);
    printf("Escreva o tempo de serviço (em anos): ");
    scanf("%d", &tempo_servico);

    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("O trabalhador PODE se aposentar.\n");
    } else {
        printf("O trabalhador NÃO PODE se aposentar.\n");
    }
    return 0;
}