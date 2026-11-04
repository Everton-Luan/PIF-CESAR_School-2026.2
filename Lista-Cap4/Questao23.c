#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int d, m, a;

    printf("Escreva o dia, mês e ano separados por espaço (ex: 25 12 2026): ");
    scanf("%d %d %d", &d, &m, &a);

    if (m >= 1 && m <= 12) {
        printf("%d de ", d);
        switch (m) {
            case 1: printf("janeiro"); break;
            case 2: printf("fevereiro"); break;
            case 3: printf("março"); break;
            case 4: printf("abril"); break;
            case 5: printf("maio"); break;
            case 6: printf("junho"); break;
            case 7: printf("julho"); break;
            case 8: printf("agosto"); break;
            case 9: printf("setembro"); break;
            case 10: printf("outubro"); break;
            case 11: printf("novembro"); break;
            case 12: printf("dezembro"); break;
        }
        printf(" de %d\n", a);
    } else {
        printf("Erro: Mês inválido!\n");
    }
    return 0;
}