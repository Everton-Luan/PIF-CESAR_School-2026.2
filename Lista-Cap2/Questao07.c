#include <stdio.h>

int main() {
    int d, m, a;

    printf("Digite a data (dd/mm/aaaa): ");
    if (scanf("%d/%d/%d", &d, &m, &a) != 3) {
        printf("Erro: Formato invalido! Digite apenas numeros separados por barra (dd/mm/aaaa).\n");
        return 1;
    }

    if ((d < 1 || d > 31 || m < 1 || m > 12 || a < 1) || (d > 28 && m == 2)) {
        printf("Erro: Data fora do intervalo valido (dia, mes ou ano inconsistentes)!\n");
        return 1;
    }

    printf("Data invertida: %04d/%02d/%02d\n", a, m, d);

    return 0;
}