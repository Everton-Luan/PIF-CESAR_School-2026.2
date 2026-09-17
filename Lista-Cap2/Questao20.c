#include <stdio.h>
#include <math.h>

int main() {
    float lado_a, lado_b;

    printf("Digite o comprimento do primeiro cateto (lado A): ");
    scanf("%f", &lado_a);

    printf("Digite o comprimento do segundo cateto (lado B): ");
    scanf("%f", &lado_b);

    float hipotenusa = sqrt(pow(lado_a, 2) + pow(lado_b, 2));

    printf("Comprimento da hipotenusa: %.2f\n", hipotenusa);
    
    return 0;
}