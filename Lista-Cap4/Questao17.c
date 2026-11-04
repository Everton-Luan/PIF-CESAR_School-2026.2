#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float valor_total, valor_final, comissao;
    int opcao;

    printf("Escreva o valor total da compra: R$ ");
    scanf("%f", &valor_total);
    printf("Escolha a opção de pagamento (1 = À vista com 10%% desc., 2 = Parcelado em 3x): ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        valor_final = valor_total * 0.90;
        comissao = valor_final * 0.05;
        printf("Valor final a pagar: R$ %.2f\n", valor_final);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else if (opcao == 2) {
        valor_final = valor_total / 3.0;
        comissao = valor_total * 0.05;
        printf("Valor de cada parcela (3x): R$ %.2f\n", valor_final);
        printf("Comissão do vendedor: R$ %.2f\n", comissao);
    } else {
        printf("Erro: Opção de pagamento inválida!\n");
    }
    return 0;
}