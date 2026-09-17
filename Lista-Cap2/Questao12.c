#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", --num);
    num++; 
    printf("Sucessor: %d\n", ++num);

    return 0;
}