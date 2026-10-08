#include <stdio.h>

int main() {
    printf("--- Contagem com FOR ---\n");
    for(int i = 0; i <= 100; i++) {
        printf("%d ", i);
    }
    
    printf("\n\n--- Contagem com WHILE ---\n");
    int j = 0;
    while(j <= 100) {
        printf("%d ", j);
        j++;
    }
    
    printf("\n\n--- Contagem com DO-WHILE ---\n");
    int k = 0;
    do {
        printf("%d ", k);
        k++;
    } while(k <= 100);
    printf("\n");
    
    /* 
    Resposta: A estrutura 'for' é a mais adequada para este caso, pois
    o número de iterações (0 a 100) é previamente conhecido e fixo. O 'for' 
    permite agrupar inicialização, condição e incremento na mesma linha.
    */
    
    return 0;
}