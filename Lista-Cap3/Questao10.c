#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("--- Os 100 primeiros múltiplos inteiros de 3 ---\n");
    
    for(int i = 1; i <= 100; i++) {
        printf("%d\t", i * 3);
        
        // Pula linha a cada 10 números impressos
        if (i % 10 == 0) {
            printf("\n");
        }
    }
    
    return 0;
}