# Questões escritas objetivas:

## Questão 01 - Resolução

### A:
    Escrever if (x=0) realiza uma atribuição em vez de uma comparação. A variável x recebe o valor 0, e a expressão avalia como 0 (falso), ignorando o bloco de código. if (x==0) compara se x é igual a 0.

### B:
    Na Linguagem C, qualquer valor diferente de zero é considerado verdadeiro, enquanto o valor zero é considerado falso. Quando o resultado é avaliado como falso, significa dizer que a expressão do if é falha. Já quando é verdadeira, significa que a expressão resulta em qualquer número diferente de zero.

### C:
    A instrução if (x=-5) executará o bloco de código. A variável x recebe -5, e como -5 é diferente de 0, a condição é avaliada como verdadeira pelo padrão ANSI C.

## Questão 02 - Resolução

### A:
    A mensagem "Opção B" será impressa. O código aninha o segundo if dentro do primeiro. Como x=15 é maior que 10, ele avalia if (y>10). Como y=5 é falso, ele cai no else associado a este if interno.

### B:
    A regra oficial do C é que um else sempre se associa ao if mais próximo anterior que ainda não possui um else.    

### C:
    O código com as chaves:

    int x = 15, y = 5;

    if (x > 10) {
        if (y > 10) {
            printf("Opção A\n");
        }
    } else {
        printf("Opção B\n"); 
    }

## Questão 03 - Resolução

### A:
    A segunda linha avalia se media é maior ou igual a 7.0. Se for verdadeiro, retorna 'A'; se falso, retorna 'R'. Para media = 6.8, a condição é falsa, logo situacao armazenará 'R'.

### B: 
    media = (nota1 + nota2) / 2.0;
    if (media >= 7.0) {
        situacao = 'A';
    } else {
        situacao = 'R';
    }

### C:
    O operador ternário não pode substituir qualquer estrutura if-else. Ele é limitado a retornar valores (expressões) e não pode conter blocos de múltiplos comandos, laços ou declarações de variáveis.    

## Questão 04 - Resolução

### A:
    A saída:
    Prata
    Ouro

    Ocorreu mais de uma impreção pois o case 2 não possuia break.

### B: 
    O break interrompe a execução do bloco switch e sai da estrutura. Quando omitido, ocorre o fall-through, executando todos os cases subsequentes até encontrar um break ou o fim do bloco.
### C:
    O comando switch aceita apenas expressões que resultem em tipos inteiros (como int, char, enum). Não é permitido usar float ou double devido a problemas de precisão em comparações de ponto flutuante.

## Questão 05 - Resolução

### A:
    A saída será: a=0, b=5, c=8. Como a!=0 é falso (pois a = 0), a segunda parte da condição && (++b > 5) não é avaliada (curto-circuito), o incremento ++b é ignorado, e o bloco else subtrai 2 de c.

### B:
    No operador E (&&), se o primeiro operando for falso, o resultado já é falso, e o segundo operando não é avaliado. No OU (||), se o primeiro operando for verdadeiro, o resultado já é verdadeiro, ignorando o segundo.

### C:
    Com if (a==0 || ++b>5), a primeira condição (a==0) é verdadeira. Pelo curto-circuito do ||, o ++b não seria executado. Logo, c+=10 seria executado. O valor final seria b=5 e c=20.

## Questão 06 - Resolução

### A:
    Para idade = 65, a saída será:
    Idoso
    Adulto
    Jovem
    Múltiplas mensagens são exibidas porque os comandos if são independentes e a idade 65 satisfaz as três primeiras condições.

### B:
    Comandos if independentes são avaliados um por um, mesmo que os anteriores sejam verdadeiros. Uma cadeia else-if para na primeira condição verdadeira, ignorando as demais.

### C:
    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }