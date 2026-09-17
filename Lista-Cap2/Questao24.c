#include <stdio.h>

int main() {
    float kmh;

    printf("Digite a velocidade em quilometros por hora (km/h): ");
    scanf("%f", &kmh);

    printf("Velocidade convertida: %.2f m/s\n", kmh / 3.6);
    
    return 0;
}