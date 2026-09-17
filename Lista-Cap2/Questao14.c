#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, p, area;

    printf("Digite os 3 lados de um triangulo: ");
    scanf("%f %f %f", &a, &b, &c);

    p = (a + b + c) / 2.0;
    area = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}