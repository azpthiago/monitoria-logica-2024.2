#include <stdio.h>

int main() {
  int n;

  printf("Digite a quantidade de valores a serem preenchidos: ");
  scanf("%i", &n);

  int arrayOriginal[n], arrayMultiplicado[n];

  for (int i = 0; i < n; i++) {
    printf("Digite o %iº valor: ", i + 1);
    scanf("%i", &arrayOriginal[i]);
  }

  for (int i = 0; i < n; i++) {
    arrayMultiplicado[i] = arrayOriginal[i] * arrayOriginal[n - i - 1];
    printf("Posição %i - Resultado %i\n", i + 1, arrayMultiplicado[i]);
  }
}