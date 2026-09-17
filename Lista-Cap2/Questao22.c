#include <stdio.h>

int main() {
    char maiuscula;

    printf("Digite uma letra MAIUSCULA: ");
    scanf(" %c", &maiuscula);

    char minuscula = maiuscula + 32; 

    printf("Caractere convertido para minuscula: %c\n", minuscula);

    return 0;
}