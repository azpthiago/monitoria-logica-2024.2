#include <stdio.h>

int main() {
  int X, Y, soma = 0, i, troca;

  printf("+ Digite o valor de X: ");
  scanf("%d", &X);

  printf("+ Digite o valor de Y: ");
  scanf("%d", &Y);

  if (X > Y) {
    troca = X;
    X = Y;
    Y = troca;
  }

  for (i = X + 1; i < Y; i++) {
    if (i % 2 != 0) {
      soma += i;
    }
  }

  printf("-> A soma dos números ímpares entre %d e %d é: %d\n", X, Y, soma);

  return 0;
}
