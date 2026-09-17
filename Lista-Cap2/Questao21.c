#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere qualquer do teclado: ");
    scanf(" %c", &caractere);

    printf("O caractere '%c' corresponde ao codigo ASCII: %d\n", caractere, caractere);

    return 0;
}