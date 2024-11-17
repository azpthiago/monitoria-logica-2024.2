#include <stdio.h>

int main() {
  int primeiroValor, segundoValor;

  printf("+ Digite o primeiro valor: ");
  scanf("%i", &primeiroValor);
  printf("+ Digite o segundo valor: ");
  scanf("%i", &segundoValor);

  if (primeiroValor > segundoValor) {
    printf("-> O primeiro valor é maior.");
  } else {
    printf("-> O segundo valor é maior.");
  }

  return 0;
}