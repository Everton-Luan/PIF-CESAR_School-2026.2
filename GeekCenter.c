#include <stdio.h>
#include <string.h>

typedef struct{
  char id[5];
  char nome[30];
  int tipo;
  float valor;
  char descricao[100];
  int status;
}produto;

typedef struct{
  char id[5];
  char nome[30];
  char endereco[100];
  int status;
}cliente;

typedef struct{
  char id[5];
  char id_cliente[5];
  char id_produto[5];
  int status;
}compra;


produto produtos[100];
cliente clientes[100];
compra compras[100];

int tot_produtos = 0, tot_clientes = 0, tot_compras = 0;

void inserir_produto(){
  
  if (tot_produtos < 100){
    produto *p = &produtos[tot_produtos];
  
    printf("\nDigite o id do produto [até 4 caracteres]: ");
    scanf("%s", p->id);
    getchar();
    printf("\n");

    printf("Digite o nome do produto: ");
    scanf("%29[^\n]", p->nome);
    getchar();
    printf("\n");

    printf("Digite o tipo do produto: \n(1) Action Figure\n(2) HQ\n(3) Poster\n(4) Livro\n(5) Filme\n> ");
    scanf("%i", &p->tipo);
    getchar();
    if (p->tipo < 1 || p->tipo > 5){
      printf("\nTipo inválido, digite novamente.\n\n");
      printf("Digite o tipo do produto: \n(1) Action Figure\n(2) HQ\n(3) Poster\n(4) Livro\n(5) Filme\n> ");
      scanf("%i", &p->tipo);
      getchar();
    };
    printf("\n");

    printf("Digite o valor do produto: ");
    scanf("%f", &p->valor);
    getchar();
    printf("\n");

    printf("Digite a descrição do produto: ");
    scanf("%99[^\n]", p->descricao);
    getchar();
    printf("\n");

    p->status = 1;
    tot_produtos++;

    printf("Produto inserido com sucesso!\n\n");
    printf(" ID: %s\n Nome: %s\n Tipo: %i\n Valor: %.2f\n Descrição: %s\n",
       p->id, p->nome, p->tipo, p->valor, p->descricao);
  }else{
    printf("Limite atingido!!\n\n");
  }
  return;
}

void remover_produto(){
  char id[5];
  printf("\nInforme o ID do produto a ser removido: \n");
  scanf("%s", id);
  for (int i = 0; i < tot_produtos; i++) {
      if (strcmp(produtos[i].id, id) == 0 && produtos[i].status == 1) {
          produtos[i].status = 0;
          printf("Produto removido\n");
          return;
      }
  }
  printf("Produto não encontrado\n");
}

void buscar_produto(){
  char id[5];
  printf("\nInforme o ID do produto: \n");
  scanf("%4s", id);
  for (int i = 0; i < tot_produtos; i++) {
      if (strcmp(produtos[i].id, id) == 0 && produtos[i].status == 1) {
        printf("\nProduto encontrado!!\n\n");  
        printf("ID: %s\nNome: %s\nTipo: %i\nValor: %.2f\nDescrição: %s\n",
                 produtos[i].id, produtos[i].nome, produtos[i].tipo, produtos[i].valor, produtos[i].descricao);
          return;
      }
  }
  printf("Produto não encontrado\n");
}

void menu_produto(){
  int opc;
  
  do {
      printf("\n========================================= \n             MENU DO PRODUTO \n=========================================\n");
      printf("[1] Inserir Produto\n");
      printf("[2] Remover Produto\n");
      printf("[3] Buscar Produto\n");
      printf("[4] Voltar\n");
      printf("> ");
      scanf("%i", &opc);
      getchar();

      switch (opc) {
          case 1: inserir_produto(); break;
          case 2: remover_produto(); break;
          case 3: buscar_produto(); break;
          case 4: break;
          default: printf("Opção inválida\n");
      }
  } while (opc != 4);
}

void inserir_cliente(){
  if (tot_clientes < 100){
     cliente *c = &clientes[tot_clientes];

    printf("\nDigite o id do cliente [até 4 caracteres]: ");
    scanf("%s", c->id);
    getchar();
    printf("\n");

    printf("Digite o nome do cliente: ");
    scanf("%29[^\n]", c->nome);
    getchar();
    printf("\n");

    printf("Digite o endereço do cliente: ");
    scanf("%99[^\n]", c->endereco);
    getchar();
    printf("\n");

    c->status = 1;
    tot_clientes++;

    printf("Cliente inserido com sucesso!\n\n");
    printf("  ID: %s\n  Nome: %s\n  Endereço: %s\n", c->id, c->nome, c->endereco);
  }else{
    printf("Limite atingido!!\n\n");
  }
  return;
}

void remover_cliente(){
  char id[5];
  printf("\nInforme o ID do cliente a ser removido: \n");
  scanf("%s", id);
  for (int i = 0; i < tot_clientes; i++){
      if (strcmp(clientes[i].id, id) == 0 && clientes[i].status == 1){
          clientes[i].status = 0;
          printf("Cliente removido\n");
          return;
      }
  }
  printf("Cliente não encontrado\n");
}

void buscar_cliente(){
  char id[5];
  printf("\nInforme o ID do cliente: \n");
  scanf("%s", id);
  for (int i = 0; i < tot_clientes; i++){
      if (strcmp(clientes[i].id, id) == 0 && clientes[i].status == 1){
          printf("\nCliente encontrado(a)!!\n\n"); 
          printf("ID: %s\nNome: %s\nEndereço: %s\n", clientes[i].id, clientes[i].nome, clientes[i].endereco);
          return;
      }
  }
  printf("Cliente não encontrado\n");
}

void menu_cliente(){
  int opc;

  do{
      printf("\n========================================= \n             MENU DO CLIENTE \n=========================================\n");
     printf("[1] Inserir Cliente\n");
     printf("[2] Remover Cliente\n");
     printf("[3] Buscar Cliente\n");
     printf("[4] Voltar\n");
     printf("> ");
     scanf("%i", &opc);
     getchar();

    switch (opc){
      case 1: inserir_cliente(); break;
      case 2: remover_cliente(); break;
      case 3: buscar_cliente(); break;
      case 4: break;
      default: printf("Opção inválida\n");
    }
  }while(opc != 4);
}

void registrar_compra(){
  if (tot_compras < 100){
     compra *c = &compras[tot_compras];

    printf("Insira o ID da compra [até 4 caracteres]: ");
    scanf("%s", c->id);
    getchar();
    printf("\n");

    printf("Insira o ID do cliente: ");
    scanf("%s", c->id_cliente);
    getchar();
    printf("\n");

    printf("Insira o ID do produto: ");
    scanf("%s", c->id_produto);
    getchar();
    printf("\n");

    tot_compras++;
  }else{
    printf("Limite atingido!!\n\n");
  }
}

void buscar_compra(){
  char id[5];

  printf("\nInforme o ID da compra: \n");
  scanf("%s", id);

  for (int i = 0; i < tot_compras; i++){
      if (strcmp(compras[i].id, id) == 0){
          printf("\nCompra encontrada!!\n\n"); 
          printf("ID: %s\nID do Cliente: %s\nID do Produto: %s\n", compras[i].id, compras[i].id_cliente, compras[i].id_produto);
        return;
      } 
  }
  printf("Compra não encontrada\n");
}

void menu_compra(){
  int opc;

  do{
      printf("\n========================================= \n             MENU DA COMPRA \n=========================================\n");
      printf("[1] Registrar Compra\n");
      printf("[2] Buscar Compra\n");
      printf("[3] Voltar\n");
      printf("> ");
      scanf("%i", &opc);
      getchar();
  
      switch (opc){
        case 1: registrar_compra(); break;
        case 2: buscar_compra(); break;
        case 3: break;
        default: printf("Opção inválida\n");
    }
  }while(opc != 3);
}

void recomendacao(){
  char id[5];
  printf("\nInforme o ID do cliente [até 4 caracteres]: ");
  scanf("%s", id);
  getchar();
  printf("\n");

  int conta_tipo[5];
  for(int i = 0; i < tot_compras; i++){
      if(strcmp(compras[i].id_cliente, id) == 0){
          for(int j = 0; j < tot_produtos; j++){
              if(strcmp(produtos[j].id, compras[i].id_produto) == 0){
                 conta_tipo[produtos[j].tipo]++;
              }
          } 
      }
  }

  int tipo_mais_comprado = 0;
  for(int i = 1; i < 5; i++){
      if(conta_tipo[i] > conta_tipo[tipo_mais_comprado]){
          tipo_mais_comprado = i;
      }
  }

  int conta_produto[100] = {0};
  for (int i = 0; i < tot_compras; i++) {
    for (int j = 0; j < tot_produtos; j++) {
      if (strcmp(produtos[j].id, compras[i].id_produto) == 0 && produtos[j].tipo == tipo_mais_comprado) {
        conta_produto[j]++;
        break;
      }
    }
  }

  int mais_vendido = -1;
  int max_vendas = 0;
  for (int i = 0; i < tot_produtos; i++) {
    if (conta_produto[i] > max_vendas && produtos[i].status == 1) {
      max_vendas = conta_produto[i];
      mais_vendido = i;
    }
  }

  if (mais_vendido == -1) {
    printf("Nenhuma recomendação disponível.\n");
  } else {
    printf("Recomendação: %s - %s\n", produtos[mais_vendido].id, produtos[mais_vendido].nome);
  }

}

void relatorio_produtos() {
  int vendas[100] = {0};
  for (int i = 0; i < tot_compras; i++) {
    for (int j = 0; j < tot_produtos; j++) {
      if (strcmp(produtos[j].id, compras[i].id_produto) == 0) {
        vendas[j]++;
        break;
      }
    }
  }

  printf("\n--- Produtos ordenados por vendas ---\n");
  for (int i = 0; i < tot_produtos; i++) {
    printf("%s: %s (%d vendas)\n\n", produtos[i].id, produtos[i].nome, vendas[i]);
  }
}

void relatorio_clientes() {
  int compras_cliente[100] = {0};
  for (int i = 0; i < tot_compras; i++) {
    for (int j = 0; j < tot_clientes; j++) {
      if (strcmp(clientes[j].id, compras[i].id_cliente) == 0) {
        compras_cliente[j]++;
        break;
      }
    }
  }

  printf("\n--- Clientes ordenados por compras ---\n");
  for (int i = 0; i < tot_clientes; i++) {
    printf("%s: %s (%d compras)\n\n", clientes[i].id, clientes[i].nome, compras_cliente[i]);
  }
}

void relatorio_vendas() {
  float total = 0;
  for (int i = 0; i < tot_compras; i++) {
    for (int j = 0; j < tot_produtos; j++) {
      if (strcmp(produtos[j].id, compras[i].id_produto) == 0) {
        total += produtos[j].valor;
        break;
      }
    }
  }
  printf("\n--- Valor total vendido: R$ %.2f ---\n\n", total);
}

void menu_principal(){
  int opc;

  do{
      printf("\n========================================= \n               GEEK CENTER \n=========================================\n");
      printf("[1] Gerenciar produtos\n");
      printf("[2] Gerenciar clientes\n");
      printf("[3] Gerenciar compras\n");
      printf("[4] Recomendação da loja\n");
      printf("[5] Relatório da loja\n");
      printf("[6] Sair\n");
      printf("> ");
      scanf("%i", &opc);
      getchar();

     switch (opc){
       case 1: menu_produto(); break;
       case 2: menu_cliente(); break;
       case 3: menu_compra(); break;
       case 4: recomendacao(); break;
       case 5: 
        relatorio_produtos();
        relatorio_clientes();
        relatorio_vendas();
        break;
       case 6: break;
       default: printf("Opção inválida\n");
     }
  }while(opc != 6);
}

int main(void) {

  menu_principal();
  return 0;
}