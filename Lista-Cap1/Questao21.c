#include <stdio.h>
#include <string.h>
#include <windows.h>

void versao1(){
    printf("Treinamento em programação.\nLinguagem C.\n\n");
}

void versao2(){
    printf("Treinamento em programação.\n");
    printf("Linguagem C.\n\n");
}

void versao3(){
    char linha[82]; // 27 barras * 3 bytes + 1 (\0)

    // Preenche a linha copiando o caractere de 3 bytes 23 vezes
    for (int i = 0; i < 27; i++) {
        memcpy(&linha[i * 3], "═", 3);
    }
    linha[27 * 3] = '\0'; // Finaliza a string

    // Imprime os cantos e o conteúdo normalmente em UTF-8
    printf("╔%s╗\n", linha);
    printf("║Treinamento em programação.║\n");
    printf("║Linguagem C.               ║\n");
    printf("╚%s╝\n", linha);
}

int main(){
    SetConsoleOutputCP(CP_UTF8);

    versao1();
    versao2();
    versao3();

    return 0;
}