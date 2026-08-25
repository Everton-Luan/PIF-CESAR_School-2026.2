# Questões escritas objetivas:

## Questão 04 - Resolução

### Erro 1 [ #include <stdlib.h>; ]:
* A diretiva não precisa de ponto e virgula no final.
### Erro 2 [ int Main{} ]:
* A função main deve ser escrita com 'm' minúsculo
* Para declarar os parâmetros o correto seria abrir parenteses, e não chaves.
### Erro 3 [ Abertura da função ]:
* Para abrir o bloco de código da função o correto seria abrir chaves, e não parenteses.
### Erro 4 [ printf( Existem %d semanas no ano.,52); ]:
* O texto antes da virgula, e dentro da abertura de parâmetros de printf() deveria estar dentro de aspas duplas para a função print funcionar.
### Erro 5 [ cout << endl; ]:
* Esse comando não existe em C, ele é nativo do C++.

## Questão 05 - Resolução

### Diretivas que faltam:
* #include <stdio.h>
* #include <stdlib.h>
### Elementos cruciais que faltam:
* C é fortemente tipado, logo a função main precisa ser inicializada, antes de tudo, com um 'int'.
* Para finalizar corretamente a função main é necessário um 'return 0;' ao fim do bloco de código. 

## Questão 06 - Resolução

### Diretivas que faltam:
* #include <stdio.h>
* #include <stdlib.h>
### Erros de sintaxe:
* C é fortemente tipado, logo a função main precisa ser inicializada, antes de tudo, com um 'int'.
* Para atribuir valor a várias variáveis em uma única linha, as variáveis devem ser separadas por virgula. E a finalização da linha com ponto e virgula.
* No printf() falta uma aspa dupla para fechar a menssagem. Deve ficar depois do \n.
*  Para finalizar corretamente a função main é necessário um 'return 0;' ao fim do bloco de código. 

## Questão 07 - Resolução

### Letra a:
```

    Bom dia! Shirley.
```
### Letra b:
```
Você já tomou café?

```
### Letra c:
```


A solução não existe!
Não insista.
```
### Letra d:
```
Duas    linhas  de  saída
ou  uma?
```
### Letra e:
``` 
um
doi
três

```

## Questão 08 - Resolução

### Explicação 1:
* Primeiro são usadas as diretivas <stdio.h> e <stdlib.h>, para cnseguir usar as funções printf() e system().
* A função main() é declarada e com as chaves o bloco de código que irá ser usado é aberto.
* O printf() irá imprimir oque está abaixo, e logo depois o system imprime instruções de como prosseguir também.
* Com return 0; o código finaliza.
### Oque será impresso:
```

    "Primeiro programa"Pressione qualquer tecla para continuar. . .
```

## Questão 09 - resolução

### Oque o compilador vê:
* Primeiro printf() [com três %c]: 
    * O pimeiro %c vai receber o valor \n, o que resulta numa quebra de linha.
    * O segundo recebe o valor \t, que resulta em um TAB.
    * O terceiro recebe \', a \ vai ser ignorada e a aspas simples será impressa.
*Segundo printf() [com um %c]:
    * O %c espera algum valor do tipo chat dentro de aspas simples, porém como o \" foi passado entre aspas duplas foi interpretado como uma string, e não como caractere.
    * Com isso o printf() pega o valor númerico do endereço de memória da string passada, e tenta forçar uma conversão de valor para um símbolo da tabela ASCII.
### Oque foi impresso:
* No caso da minha máquina, testei o código e isso foi impresso [pode dar diferente por conta do segundo printf()]: 
```

    "Primeiro programa|Pressione qualquer tecla para continuar. . . 
```

## Questão 10 - Resolução

### Letra b: Verdadeiro (a linguagem C diferencia rigorosamente letras maiúsculas de minúsculas).
* Case sensitive é a propriedade de diferenciar letras em caixa alta de letras em caixa baixa. Como a linguagem C possui essa propriedade os identificadores da questão não representam a mesma variável na memória.

## Questão 11 - Resolução

* '\r'     | Constante de caractere         |char
* 2130     | Constante inteira decimal      |int
* -123     | Constante inteira decimal      |int
* 33.28    | Constante de ponto flutuante   |double
* 0XFA     | Constante inteira hexadecimal  |int
* 0101     | Constante inteira octal        |int
* 2.0E30   | Constante de ponto flutuante   |double
* '\xDC'   | Constante de caractere         |char
* '\"'     | Constante de caractere         |char
* '\\'     | Constante de caractere         |char
* 'F'      | Constante de caractere         |char
* O        | É um identificador             |
* '\0'     | Constante de caractere         |char
* "F"      | Constante string               |char[]
* -4567.89 | Constante de ponto flutuante   |double

## Questão 12 - Resolução

* int a;           | Correto   | Declaração válida.
* float b;         | Correto   | Declaração válida.
* double float c;  | Incorreto | Isso é inválido, double e float são tipos flutuantes diferentes.
* unsigned char d; | Correto   | Declaração válida, e o caracter que for passado para essa variável não pode conter o sinal de negativo.
* unsigned e;      | Correto   | Declaração válida. Quando não é passado o tipo do unsigned, o C entende que é unsigned int.
* long float f;    | Incorreto | Incorreto porque o long não pode ser combinado com float, apenas com double.
* long g;          | Correto   | Declaração válida.
* long double h;   | Correto   | long double é um tipo válido de ponto flutuante com precisão igual ou superior à de double. 

## Questão 13 - Resolução

Letra c

## Questão 14 - Resolução

Letra a

## Questão 15 - Resolução

Letra c

## Questão 16 - Resolução

Letra c

## Questão 17 - Resolução

Da alternativa A a Alternativa C está correto, apenas a alternativa D está errada. O C é bem flexivél com espaçamentos, ou seja, acaba não sendo afetado, não alterando em nada na compilação do programa.