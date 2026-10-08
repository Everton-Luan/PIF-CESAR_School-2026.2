#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int opcao;
    float salario, novo_salario, imposto;
    int leitura_valida;
    
    do {
        printf("\n--- Sistema de Folha de Pagamento ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retenção de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opção (1-3): ");
        
        leitura_valida = scanf("%d", &opcao);
        
        // Limpeza essencial do buffer para evitar loop infinito no menu
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        
        if (leitura_valida != 1) {
            opcao = 0; // Força cair no 'default' do switch caso digite letras
        }
        
        switch (opcao) {
            case 1:
                printf("\nDigite o salário atual: R$ ");
                if (scanf("%f", &salario) == 1 && salario >= 0) {
                    novo_salario = (salario <= 2000.0) ? salario * 1.15 : salario * 1.10;
                    printf("O novo salário com reajuste será: R$ %.2f\n", novo_salario);
                } else {
                    printf("Valor de salário inválido.\n");
                }
                // Limpa buffer do salário
                while ((c = getchar()) != '\n' && c != EOF);
                break;
                
            case 2:
                printf("\nDigite o salário bruto: R$ ");
                if (scanf("%f", &salario) == 1 && salario >= 0) {
                    imposto = (salario <= 3000.0) ? salario * 0.08 : salario * 0.15;
                    printf("O valor retido para o Imposto de Renda será: R$ %.2f\n", imposto);
                } else {
                    printf("Valor de salário inválido.\n");
                }
                // Limpa buffer do salário
                while ((c = getchar()) != '\n' && c != EOF);
                break;
                
            case 3:
                printf("\nEncerrando o programa. Até logo!\n");
                break;
                
            default:
                printf("\nOpção inválida! Por favor, escolha 1, 2 ou 3.\n");
        }
    } while (opcao != 3);
    
    return 0;
}