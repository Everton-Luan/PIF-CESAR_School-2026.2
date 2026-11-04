#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float a, b, c, delta, x1, x2;

    printf("Escreva o coeficiente a (diferente de 0): ");
    scanf("%f", &a);
    if (a == 0) {
        printf("O coeficiente 'a' deve ser diferente de zero.\n");
        return 0;
    }
    printf("Escreva o coeficiente b: ");
    scanf("%f", &b);
    printf("Escreva o coeficiente c: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta < 0) {
        printf("A equação não possui raízes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A raiz única é x = %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes reais são x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
    return 0;
}