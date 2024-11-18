#include <stdio.h>

int main() {
  int n;

  printf("Digite a quantidade de valores a serem preenchidos: ");
  scanf("%d", &n);

  int array[n];

  for (int i = 0; i < n; i++) {
    printf("Digite o %dº valor: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("Posições e valores dos números primos:\n");
  for (int i = 0; i < n; i++) {
    int num = array[i];
    int ehPrimo = 1;

    if (num <= 1) {
      ehPrimo = 0;
    } else {
      for (int j = 2; j * j <= num; j++) {
        if (num % j == 0) {
          ehPrimo = 0;
          break;
        }
      }
    }

    if (ehPrimo) {
      printf("Posição %d -> Valor %d\n", i + 1, num);
    }
  }

  return 0;
}
