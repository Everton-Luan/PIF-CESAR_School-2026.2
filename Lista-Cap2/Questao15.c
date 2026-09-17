#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media_simples, media_ponderada;

    printf("Digite a nota da 1a prova (Peso 1): ");
    scanf("%f", &nota1);

    printf("Digite a nota da 2a prova (Peso 1): ");
    scanf("%f", &nota2);

    printf("Digite a nota da 3a prova (Peso 2): ");
    scanf("%f", &nota3);

    printf("Digite a nota da 4a prova (Peso 2): ");
    scanf("%f", &nota4);

   
    media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;
    media_ponderada = (nota1 * 1.0 + nota2 * 1.0 + nota3 * 2.0 + nota4 * 2.0) / 6.0;

    printf("\n=== RESULTADO DAS MEDIAS ===\n");
    printf("Media Aritmetica Simples: %.2f\n", media_simples);
    printf("Media Ponderada:          %.2f\n", media_ponderada);

    return 0;
}