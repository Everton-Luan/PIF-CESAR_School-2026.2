#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int senha_secreta = 2026;
    int tentativa, tentativas_restantes = 3;
    int acesso = 0;
    
    printf("--- Autenticação de Sistema ---\n");
    
    while (tentativas_restantes > 0) {
        printf("Introduza a palavra-passe (Restam %d tentativas): ", tentativas_restantes);
        scanf("%d", &tentativa);
        
        if (tentativa == senha_secreta) {
            printf("\nAcesso Concedido! Utilizou %d tentativa(s).\n", 4 - tentativas_restantes);
            acesso = 1;
            break; // Sai do laço se acertou
        } else {
            printf("Palavra-passe incorreta.\n\n");
            tentativas_restantes--;
        }
    }
    
    if (!acesso) {
        printf("Conta Bloqueada por Segurança!\n");
    }
    
    return 0;
}