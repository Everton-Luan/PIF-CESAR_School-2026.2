#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    
    int total, pago, troco, qtd;

    printf("Escreva o valor total a pagar: R$ ");
    scanf("%d", &total);
    printf("Escreva o valor entregue pelo cliente: R$ ");
    scanf("%d", &pago);

    if (pago < total) {
        printf("Erro: Valor insuficiente para pagamento.\n");
    } else {
        troco = pago - total;
        printf("Troco devido: R$ %d\n", troco);
        
        qtd = troco / 100; troco %= 100;
        if (qtd > 0) printf("%d cédula(s) de R$ 100\n", qtd);
        
        qtd = troco / 50; troco %= 50;
        if (qtd > 0) printf("%d cédula(s) de R$ 50\n", qtd);
        
        qtd = troco / 20; troco %= 20;
        if (qtd > 0) printf("%d cédula(s) de R$ 20\n", qtd);
        
        qtd = troco / 10; troco %= 10;
        if (qtd > 0) printf("%d cédula(s) de R$ 10\n", qtd);
        
        qtd = troco / 5; troco %= 5;
        if (qtd > 0) printf("%d cédula(s) de R$ 5\n", qtd);
        
        qtd = troco / 2; troco %= 2;
        if (qtd > 0) printf("%d cédula(s) de R$ 2\n", qtd);
        
        if (troco > 0) printf("Restante de R$ %d não retornável em cédulas.\n", troco);
    }
    return 0;
}