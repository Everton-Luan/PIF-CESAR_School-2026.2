#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota;
    do {
        printf("Por favor, digite uma nota válida (entre 0.0 e 10.0): ");
        scanf("%f", &nota);
        
        if (nota < 0.0 || nota > 10.0) {
            printf("Erro: O valor digitado (%.2f) está fora do intervalo! Tente novamente.\n\n", nota);
        }
    } while (nota < 0.0 || nota > 10.0);
    
    printf("\nNota registrada com sucesso! A nota informada foi: %.2f\n", nota);
    return 0;
}