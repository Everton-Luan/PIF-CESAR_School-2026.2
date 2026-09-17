#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    printf("Simulando o lancamento de 3 dados de 6 lados...\n\n");

    printf("Resultado do Dado 1: %d\n", (rand() % 6) + 1);
    printf("Resultado do Dado 2: %d\n", (rand() % 6) + 1);
    printf("Resultado do Dado 3: %d\n", (rand() % 6) + 1);

    return 0;
}