#include <stdio.h>

int main() {
    float c, f, k;

    printf("Digite uma temperatura em graus celsius: ");
    scanf("%f", &c);
    f = (c * 9.0/5.0) + 32;
    k = c + 273.15;

    printf("Fahrenheit: %.2f | Kelvin: %.2f\n", f, k);

    return 0;
}