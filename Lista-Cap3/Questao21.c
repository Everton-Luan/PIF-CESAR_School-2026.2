#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    srand(time(NULL)); // Inicializa a semente aleatória
    char secreta = rand() % 26 + 'a';
    char palpite;
    int tentativas = 0;
    
    printf("--- Jogo de Adivinhação ---\n");
    printf("Tente adivinhar a letra minúscula secreta (de 'a' a 'z').\n\n");
    
    while (1) {
        printf("Digite uma letra: ");
        scanf(" %c", &palpite); // O espaço antes de %c ignora o "Enter" anterior
        tentativas++;
        
        if (palpite == secreta) {
            printf("\nParabéns! Você acertou a letra secreta '%c' em %d tentativa(s).\n", secreta, tentativas);
            break;
        } else if (palpite < secreta) {
            printf("Dica: A letra secreta vem DEPOIS de '%c' no alfabeto.\n", palpite);
        } else {
            printf("Dica: A letra secreta vem ANTES de '%c' no alfabeto.\n", palpite);
        }
    }
    
    return 0;
}