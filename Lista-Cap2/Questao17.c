#include <stdio.h>
#define PI 3.141593

int main() {
    float raio;

    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);

    printf("Area do circulo: %.6f\n", PI * raio * raio);
    printf("Circunferencia:  %.6f\n", 2 * PI * raio);
    return 0;
}