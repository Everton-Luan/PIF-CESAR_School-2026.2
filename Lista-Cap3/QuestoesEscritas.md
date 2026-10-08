# Questões escritas objetivas:

## Questão 01 - Resolução

### A:
    A principal diferença é que o while só roda se sua condição for verdadeira, enquanto o do-while (antes mesmo de checar a condição) roda pelo menos uma vez de certeza.

### B:
    O for é usado quando se sabe o número exato de iterações ou quando percorre uma coleção finita de dados; o while se usa quando o número de iterações é desconhecido e a execução depende de uma condição dinâmica que é avaliada antes de cada ciclo; e o do-while é quando a lógica de negócio exige que o bloco de código seja executado obrigatoriamente pelo menos uma vez, avaliando a condição de parada apenas no final.

### C:

    É um erro de lógica. Se a condição for verdadeira, o programa entrará em um laço infinito, pois o teste nunca será alterado ou interrompido dentro do bloco subsequente.

## Questão 02 - Resolução

### A:
    A variável soma foi declarada dentro do bloco do laço for, ou seja, ela deixa de existir na memória ao final da estrutura de repetição, tornando-se invisível e inacessível para a instrução printf externa.

### B:
    Se o printf estivesse no bloco, o valor da soma continuaria incorreto porque a instrução "int soma = 0;" seria re-executada a cada iteração, zerando o acumulador e perdendo o histórico do cálculo.

### C:
    O escopo define a visibilidade de uma variável, enquanto o tempo de vida dita quando ela é alocada e destruída na memória. O código corrigido exige mover a declaração para fora do laço:
    
    int i;
    int soma = 0;
    for(i=1; i<10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);

## Questão 03 - Resolução

### A:
    O console imprimirá: 36 18 9 4 2 1. A variável sofre divisão inteira por 2 a cada iteração até deixar de ser maior que 0.

### B:
    O laço lê caracteres da entrada até que a tecla 'X' seja pressionada. Os parênteses em (ch = getch()) são estritamente necessários para forçar a avaliação da atribuição antes que a comparação != 'X' ocorra. A instrução ch + 1 pega o caractere digitado e imprime o caractere imediatamente subsequente na tabela ASCII.

### C:
    O laço infinito for(;;) pode ser interrompido incluindo uma estrutura condicional if em seu interior que, ao ser satisfeita, acione o comando break.

## Questão 04 - Resolução

### A:
    Ao ser acionado dentro de um laço for ou while, o comando break termina imediatamente a execução do laço, transferindo o fluxo do programa para a primeira instrução após o bloco de repetição.

### B:
    Quando acionado em um laço for, o continue interrompe apenas a iteração atual (ignorando o restante do código dentro do bloco) e pula para a próxima iteração. A expressão que é executada imediatamente após o continue é a expressão de incremento (a terceira expressão do cabeçalho do for).

### C:
    O comando break interrompe apenas o laço interno no qual ele foi executado. O laço externo continua sua execução normalmente.

## Questão 05 - Resolução

### A:
    O laço executará exatamente 5 iterações. (Na 6ª tentativa, i será 5 e j será 5, falhando na condição i < j).

### B:
    i = 0, j = 10 soma = 10
    i = 1, j = 9 soma = 10
    i = 2, j = 8 soma = 10
    i = 3, j = 7 soma = 10
    i = 4, j = 6 soma = 10

### C:
    int i = 0, j = 10;
    while (i < j) {
        printf("i = %d, j = %d soma = %d\n", i, j, i + j);
        i++;
        j--;
    }

## Questão 06 - Resolução

### A:
    O valor final impresso para x será 6.

### B:
    O teste x++ < 5 primeiro avalia o valor atual de x em relação a 5 e, em seguida, incrementa x em 1. O laço repete até que a avaliação seja 5 < 5 (falso). Quando o laço encerra, o incremento pós-fixado ainda é aplicado, fazendo com que x passe a valer 6.

### C:
    int x = 0;
    while (x < 5) {
        x++;
    }
    x++;
    printf("Valor final de x = %d \n", x);