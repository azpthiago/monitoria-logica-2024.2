#include <stdio.h>

int main() {
  int valor;

  printf("+ Digite o valor desejado: ");
  scanf("%i", &valor);

  if (valor % 2 == 0) {
    printf("-> O número é par");
  } else {
    printf("-> O número é impar");
  }

  return 0;
}