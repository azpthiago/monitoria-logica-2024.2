#include <stdio.h>

int main() {
  int n, crescente = 1;

  printf("Digite a quantidade de valores a serem preenchidos: ");
  scanf("%d", &n);

  int array[n];

  for (int i = 0; i < n; i++) {
    printf("Digite o %d� valor: ", i + 1);
    scanf("%d", &array[i]);
  }

  for (int i = 0; i < n - 1; i++) {
    if (array[i] > array[i + 1]) {
      crescente = 0;
      break;
    }
  }

  if (crescente) {
    printf("Os n�meros est�o em ordem crescente.\n");
  } else {
    printf("Os n�meros N�O est�o em ordem crescente.\n");
  }

  return 0;
}
