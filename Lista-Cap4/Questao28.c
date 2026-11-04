#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int opcao;

    printf("Menu SAC:\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escreva a opção desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1: printf("Direcionando para Consulta de Saldo...\n"); break;
        case 2: printf("Direcionando para Emissão de Extrato...\n"); break;
        case 3: printf("Direcionando para Área de Transferência...\n"); break;
        case 4: printf("Aguarde, transferindo para um de nossos atendentes...\n"); break;
        default: printf("Erro: Opção inválida. Tente novamente!\n"); break;
    }
    return 0;
}