#include <stdio.h>

int main() {
  int n;

  printf("Digite a quantidade de valores a ser inseridos: ");
  scanf("%i", &n);

  int arrayOriginal[n], arraySomatorio[n];

  printf("Digite os %d números do vetor:\n", n);
  for (int i = 0; i < n; i++) {
    printf("Elemento %d: ", i + 1);
    scanf("%d", &arrayOriginal[i]);

    if (i == 0) {
      arraySomatorio[i] = arrayOriginal[i];
    } else {
      arraySomatorio[i] = arraySomatorio[i - 1] + arrayOriginal[i];
    }
  }

  printf("Vetor acumulado: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arraySomatorio[i]);
  }
  printf("\n");

  return 0;
}