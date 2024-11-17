#include <stdio.h>

int main() {
  // Problema: Escreva um algoritmo que leia dois números e imprima o resultado
  // da divisão do primeiro pelo segundo. Caso não for possível, mostre a
  // mensagem “DIVISAO IMPOSSIVEL”.

  int quantidade;
  double divisao, valor1, valor2;

  printf("+ Digite a quantidade de divisões: ");
  scanf("%d", &quantidade);

  for (int i = 0; i < quantidade; i++) {
    printf("+ Digite o primeiro valor: ");
    scanf("%lf", &valor1);

    printf("+ Digite o segundo valor: ");
    scanf("%lf", &valor2);

    if (valor1 / valor2 > 0) {
      divisao = valor1 / valor2;
      printf("-> Resultado da divisão %.2lf\n", divisao);
    } else {
      printf("-> Divisão impossivel\n");
    }
  }

  return 0;
}
