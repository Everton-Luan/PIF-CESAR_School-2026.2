#include <stdio.h>
#include <windows.h>

int main() {
    int valor1, valor2, valor3;
    double media;
    SetConsoleOutputCP(CP_UTF8);

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);
    
    printf("Digite o terceiro valor: ");
    scanf("%d", &valor3);

    media = (valor1 + valor2 + valor3) / 3;

    printf("Média aritmética: %.2f\n", media);

    return 0;
}