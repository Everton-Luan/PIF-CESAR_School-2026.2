#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    float numero, resultado;
    
    printf("Escreva um número real: ");
    scanf("%f", &numero);
    
    if (numero >= 0) {
        resultado = sqrt(numero);
        printf("O número é positivo ou zero. A raiz quadrada é: %.2f\n", resultado);
    } else {
        resultado = numero * numero;
        printf("O número é negativo. O quadrado do número é: %.2f\n", resultado);
    }
    return 0;
}