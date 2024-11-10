#include <stdio.h>

int main() {
  int valor;

  printf("+ Digite o valor desejado: ");
  scanf("%i", &valor);

  if (valor > 0) {
    printf("-> O número é positivo");
  } else if (valor < 0) {
    printf("-> O número é negativo");
  } else {
    printf("-> O número é zero");
  }

  return 0;
}