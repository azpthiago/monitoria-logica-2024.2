#include <stdio.h>

int main() {
  int valor;

  printf("+ Digite o valor desejado: ");
  scanf("%i", &valor);

  if (valor > 0) {
    printf("-> O n�mero � positivo");
  } else if (valor < 0) {
    printf("-> O n�mero � negativo");
  } else {
    printf("-> O n�mero � zero");
  }

  return 0;
}