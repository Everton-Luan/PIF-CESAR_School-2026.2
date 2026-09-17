#include <stdio.h>
#include <math.h>

int main() {
    float degrau_cm, altura_m;

    printf("Digite a altura de cada degrau (em centimetros): ");
    scanf("%f", &degrau_cm);

    printf("Digite a altura total que deseja alcancar (em metros): ");
    scanf("%f", &altura_m);

    int num_degraus = ceil((altura_m * 100.0) / degrau_cm);

    printf("Numero minimo de degraus necessarios: %d\n", num_degraus);
    return 0;
}