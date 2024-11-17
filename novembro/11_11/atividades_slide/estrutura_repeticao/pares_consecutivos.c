#include <stdio.h>

int main() {
  int X = 1, soma, contador, atual;

  while (X != 0) {
    printf("+ Digite um valor para X (0 para sair): ");
    scanf("%d", &X);

    if (X == 0) {
      break;
    }
    soma = 0;
    contador = 0;
    atual = X;

    if (atual % 2 != 0) {
      atual++;
    }

    while (contador < 5) {
      soma += atual;
      atual += 2;
      contador++;
    }

    printf("-> Soma dos 5 pares consecutivos a partir de %d: %d\n", X, soma);
  }

  return 0;
}
