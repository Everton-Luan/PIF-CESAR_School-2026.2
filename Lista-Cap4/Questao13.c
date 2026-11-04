#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    char operacao;
    float num1, num2, resultado;

    printf("Escolha a operação (+, -, *, /, ^): ");
    scanf(" %c", &operacao);
    printf("Escreva o primeiro número: ");
    scanf("%f", &num1);
    printf("Escreva o segundo número: ");
    scanf("%f", &num2);

    switch (operacao) {
        case '+': resultado = num1 + num2; printf("Resultado: %.2f\n", resultado); break;
        case '-': resultado = num1 - num2; printf("Resultado: %.2f\n", resultado); break;
        case '*': resultado = num1 * num2; printf("Resultado: %.2f\n", resultado); break;
        case '/': 
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida!\n");
            }
            break;
        case '^': resultado = pow(num1, num2); printf("Resultado: %.2f\n", resultado); break;
        default: printf("Erro: Operação inválida!\n"); break;
    }
    return 0;
}