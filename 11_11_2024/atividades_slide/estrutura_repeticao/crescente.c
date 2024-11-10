#include <stdio.h>

int main() {
  int qtd, valor1, valor2;

  printf("+ Digite a quantidade de pares a serem digitados: ");
  scanf("%i", &qtd);

  for (int i = 0; i < qtd; i++) {
    printf("+ Digite o primeiro inteiro: ");
    scanf("%i", &valor1);

    printf("+ Digite o segundo inteiro: ");
    scanf("%i", &valor2);

    if (valor1 > valor2) {
      printf("-> Valores em ordem decrescente\n");
    } else {
      printf("-> Valores em ordem crescente\n");
    }
  }
}