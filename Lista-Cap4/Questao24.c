#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int a, b, c;

    printf("Escreva os três ângulos do triângulo separados por espaço: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180 && a > 0 && b > 0 && c > 0) {
        if (a == 90 || b == 90 || c == 90) {
            printf("Triângulo Retângulo\n");
        } else if (a > 90 || b > 90 || c > 90) {
            printf("Triângulo Obtusângulo\n");
        } else {
            printf("Triângulo Acutângulo\n");
        }
    } else {
        printf("Erro: Os ângulos não formam um triângulo válido!\n");
    }
    return 0;
}