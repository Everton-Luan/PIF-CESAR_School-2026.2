#include <stdio.h>
#define PI 3.141593

int main() {
    float graus, radianos;

    printf("Digite o valor de um angulo em graus: ");
    scanf("%f", &graus);

    radianos = graus * (PI / 180.0);

    printf("Radianos: %.6f\n", radianos);

    return 0;
}