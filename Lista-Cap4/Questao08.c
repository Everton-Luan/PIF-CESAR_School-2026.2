#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int ano;
    
    printf("Escreva o ano para verificar se é bissexto: ");
    scanf("%d", &ano);
    
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("O ano %d é BISSEXTO!\n", ano);
    } else {
        printf("O ano %d NÃO é bissexto.\n", ano);
    }
    return 0;
}