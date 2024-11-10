#include <stdio.h>

int main() {
  int numero;

  printf("+ Digite o valor para qual deseja saber a tabuada: ");
  scanf("%i", &numero);

  for (int i = 0; i <= 10; i++) {
    printf("-> %d X %d = %d\n", numero, i, numero * i);
  }
  return 0;
}