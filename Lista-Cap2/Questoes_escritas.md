# Questões escritas objetivas:

## Questão 01 - Resolução

### A: 
    O valor numérico será 2.
### B:
    Esse fenômeno é o cast implicito por truncamento. Aqui ele ocorre pois a variável `valor_inteiro` é do tipo int, que não tem capacidade para armazenar a parte fracionária, fazendo com que o compilador corte o .97.
### C:
    Pode ser evitado declarando a variável como float ou double para manter a precisão. Mas se o objetivo for manter o tipo inteiro mas com o valor mais próximo (que seria 3), o programador deve usar a função `round()` da biblioteca `<math.h>` combinada com um cast explícito: `valor_inteiro = (int)round(2.97);`.

## Questão 02 - Resolução

### A: 
    Pois essa biblioteca foi criada para ambientes MS-DOS/Windows antigos e não faz parte do padrão internacional ANSI C. Usar ela em sistemas modernos impede que o código seja compilado de forma nativa.
### B:
`getchar()`, `putchar()`, `fgetc()` e `fputc()`.
### C:  
```
#include <stdio.h>

int main(){
    char caractere;

    // O espaço antes do %c instrui o scanf a ignorar espaços em branco e '\n' residuais
    scanf(" %c", &caractere);

    return 0;
}
```

## Questão 03 - Resolução
```
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Decimal: %d | Hexa: %x | Octal: %o | ASCII: %c\n", num, num, num, num);
    
    return 0;
}
```

## Questão 04 - Resolução
Valores iniciais: `a=1, b=2, c=3, d=4`

* `a += b + c;`       ->     a = 1 + (2 + 3) = 6
* `b *= c = d + 2;`   ->     Primeiro c = 4 + 2 = 6 | Depois b = 2 * 6 = 12
* `d %= a + a + a;`   ->     d = 4 % (19 + 19 + 19) ... d = 4 % 57 = 4
* `d -= c -= b -= a;` ->     Avaliando da direita para a esquerda: b = 12 - 6 = 6; c = 6 - 6 = 0; d = 4 - 0 = 4. (Valores finais: d = 4, c = 0, b = 6)
* `a += b += c += 7;` ->     Avaliando da direita para esquerda: c = 0 + 7 = 7; b = 6 + 7 = 13; a = 6 + 13 = 19. (Valores finais: a = 19, b = 13, c = 7)

## Questão 05 - Resolução
Valores iniciais: `i=1, j=2, k=3, n=2, x=3.3, y=4.4`

### A:
    i < i + 3 .... 1 < 4 .... Resultado: 1 (Verdadeiro)
### B:
    2*i - 7 <= j - 8 .... 2 - 7 <= 2 - 8 .... -5 <= -6 .... Resultado: 0 (Falso)
### C:
    -x + y >= 2.0 * y .... -3.3 + 4.4 >= 8.8 .... 1.1 >= 8.8 .... Resultado: 0 (Falso)
### D:
    x == y .... 3.3 == 4.4 .... Resultado: 0 (Falso)
### E:
    !(n - j) .... !(2 - 2) .... !0 .... Resultado: 1 (Verdadeiro)
### F:
    !n - j .... (!2) - 2 .... 0 - 2 = -2. Como expressão numérica é -2 (que em C é considerado "truthy"), mas como não é uma operação puramente lógica, o valor inteiro gerado é -2.
### G:
    i && j && k .... 1 && 2 && 3 .... Resultado: 1 (Verdadeiro)
### H:
    i || j - 3 && k .... Vai dar um erro de compilação poir a expressão  j - 3 não retorna um resultado lógico, e || e && só analisam resultados lógicos (verdadeiro ou falso)
### I:
    i < j && 2 >= k .... 1 < 2 && 2 >= 3 .... 1 && 0 .... Resultado: 0 (Falso)
### J:
    i == 2 || j == 4 || k == 5 .... 0 || 0 || 0 .... Resultado: 0 (Falso)

## Questão 06 - Resolução

### A:
    No Trecho A, o operador prefixado ++n incrementa n ANTES de atribuir o valor a x. Logo, n vira 6, e x recebe 6. No Trecho B, o operador pós-fixado m++ atribui o valor atual de m a y e SÓ DEPOIS incrementa m. Logo, y recebe 5, e m vira 6. 
    Impressões: Trecho A: n=6, x=6 | Trecho B: m=6, y=5.
### B:
    Essa instrução gera Comportamento Indefinido pois a linguagem C não garante a ordem exata em que os argumentos de uma função são avaliados antes de serem passados. O compilador pode resolver as operações da direita para a esquerda ou vice-versa, gerando saídas imprevisíveis ao alterar a mesma variável n múltiplas vezes entre "pontos de sequência".