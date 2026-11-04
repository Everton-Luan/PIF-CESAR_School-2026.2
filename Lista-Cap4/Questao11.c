#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int a, b, c, temp;

    printf("Escreva o primeiro número inteiro: ");
    scanf("%d", &a);
    printf("Escreva o segundo número inteiro: ");
    scanf("%d", &b);
    printf("Escreva o terceiro número inteiro: ");
    scanf("%d", &c);

    if (a > b) { temp = a; a = b; b = temp; }
    if (a > c) { temp = a; a = c; c = temp; }
    if (b > c) { temp = b; b = c; c = temp; }

    printf("Os números em ordem crescente são: %d, %d, %d\n", a, b, c);
    return 0;
}