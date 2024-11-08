#include <stdio.h>

int main() {
  // Problema: Escreva um algoritmo que leia dois n�meros e imprima o resultado
  // da divis�o do primeiro pelo segundo. Caso n�o for poss�vel, mostre a
  // mensagem �DIVISAO IMPOSSIVEL�.

  int quantidade;
  double divisao, valor1, valor2;

  printf("+ Digite a quantidade de divis�es: ");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; i++) {
    printf("+ Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("+ Digite o segundo valor: ");
    scanf("%lf", &valor2);

    if (valor1 / valor2 > 0) {
      divisao = valor1 / valor2;
      printf("-> Resultado da divis�o %.2lf\n", divisao);
    } else {
      printf("-> Divis�o impossivel\n");
    }
  }

  return 0;
}
