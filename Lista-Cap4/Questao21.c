#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float salario_atual, novo_salario, aumento;
    int cargo;

    printf("Escreva o salário atual: R$ ");
    scanf("%f", &salario_atual);
    printf("Escreva o código do cargo (1=Técnico, 2=Gerente, 3=Demais Cargos): ");
    scanf("%d", &cargo);

    if (cargo == 1) {
        aumento = salario_atual * ((salario_atual <= 3000) ? 0.15 : 0.10);
    } else if (cargo == 2) {
        aumento = salario_atual * ((salario_atual <= 5000) ? 0.10 : 0.05);
    } else if (cargo == 3) {
        aumento = salario_atual * 0.08;
    } else {
        printf("Erro: Código de cargo inválido!\n");
        return 0;
    }

    novo_salario = salario_atual + aumento;
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário reajustado: R$ %.2f\n", novo_salario);
    return 0;
}