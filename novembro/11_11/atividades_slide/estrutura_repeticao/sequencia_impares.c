#include <stdio.h>

int main() {
  int X;

  printf("+ digite o valor desejado: ");
  scanf("%i", &X);

  for (int i = 0; i <= X; i++) {
    if (i % 2 == 0) {
      printf("-> %d\n", i);
    }
  }

  return 0;
}