#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    float km, litros, consumo;

    printf("Escreva a distância percorrida em km: ");
    scanf("%f", &km);
    printf("Escreva a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    consumo = km / litros;
    printf("Consumo médio: %.2f km/l\n", consumo);

    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8.0 && consumo <= 14.0) {
        printf("Econômico!\n");
    } else {
        printf("Super econômico!\n");
    }
    return 0;
}