#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float a, b, c;

    printf("Escreva o lado A: ");
    scanf("%f", &a);
    printf("Escreva o lado B: ");
    scanf("%f", &b);
    printf("Escreva o lado C: ");
    scanf("%f", &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triângulo Equilátero\n");
        } else if (a == b || b == c || a == c) {
            printf("Triângulo Isósceles\n");
        } else {
            printf("Triângulo Escaleno\n");
        }
    } else {
        printf("Erro: Os lados fornecidos não formam um triângulo!\n");
    }
    return 0;
}