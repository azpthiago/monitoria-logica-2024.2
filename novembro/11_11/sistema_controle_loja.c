#include <stdio.h>
#include <stdlib.h>

int main() {
  int camiseta = 10, calca = 10, sapatos = 10;
  int opcMenu = 0, opcSubMenu = 0, quantidade = 0;
  const int MIN_ESTOQUE = 5;

  while (opcMenu != 4) {
    system("cls");
    printf("+ SISTEMA DE ESTOQUE           +\n");
    printf("+ [1] Adicionar produto        +\n");
    printf("+ [2] Remover produto          +\n");
    printf("+ [3] Ver estoque atual        +\n");
    printf("+ [4] Sair do programa         +\n");
    printf("+ Escolha uma das opções acima: ");
    scanf("%i", &opcMenu);

    switch (opcMenu) {
      case 1:
        system("cls");
        printf("+ Escolha o produto a qual deseja adicionar +\n");
        printf("+ [1] Camiseta                              +\n");
        printf("+ [2] Calça                                 +\n");
        printf("+ [3] Sapato                                +\n");
        scanf("%i", &opcSubMenu);

        system("cls");
        printf("+ Informe a quantidade desejada para adicionar: ");
        scanf("%i", &quantidade);

        if (quantidade < 0) {
          printf("Quantidade inválida! Use um valor positivo.\n");
        } else {
          if (opcSubMenu == 1) {
            camiseta += quantidade;
          } else if (opcSubMenu == 2) {
            calca += quantidade;
          } else if (opcSubMenu == 3) {
            sapatos += quantidade;
          } else {
            printf("-> Opção inválida\n");
          }
        }
        break;
      case 2:
        system("cls");
        printf("+ Escolha o produto a qual deseja remover +\n");
        printf("+ [1] Camiseta                            +\n");
        printf("+ [2] Calça                               +\n");
        printf("+ [3] Sapato                              +\n");
        printf("-> Opção: ");
        scanf("%i", &opcSubMenu);

        system("cls");
        printf("+Informe a quantidade desejada para remover: ");
        scanf("%i", &quantidade);

        if (quantidade < 0) {
          printf("Quantidade inválida! Use um valor positivo.\n");
        } else {
          if (opcSubMenu == 1) {
            if (camiseta - quantidade < 0) {
              printf("Erro: Estoque insuficiente de camisetas!\n");
            } else {
              camiseta -= quantidade;
            }
          } else if (opcSubMenu == 2) {
            if (calca - quantidade < 0) {
              printf("Erro: Estoque insuficiente de calas!\n");
            } else {
              calca -= quantidade;
            }
          } else if (opcSubMenu == 3) {
            if (sapatos - quantidade < 0) {
              printf("Erro: Estoque insuficiente de sapatos!\n");
            } else {
              sapatos -= quantidade;
            }
          } else {
            printf("-> Opção inválida\n");
          }
        }
        break;
      case 3:
        system("cls");
        printf("+ Estoque Atual +\n");
        printf("\n+ Camisetas: %i", camiseta);
        if (camiseta < MIN_ESTOQUE)
          printf(" -> Aviso: Estoque baixo de camisetas!\n");

        printf("\n+ Calças: %i", calca);
        if (calca < MIN_ESTOQUE)
          printf(" -> Aviso: Estoque baixo de calças!\n");

        printf("\n+ Sapatos: %i", sapatos);
        if (sapatos < MIN_ESTOQUE)
          printf(" -> Aviso: Estoque baixo de sapatos!\n");

        printf("\nPressione Enter para continuar...");
        getchar();
        getchar();
        break;
      case 4:
        system("cls");
        printf("-> Obrigado por utilizar!");
        break;
    }
  }
}