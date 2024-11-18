#include <stdio.h>

int main() {
  int arrayOriginal[5], arrayTratado[5];
  int j = 0;
  for (int i = 0; i < 5; i++) {
    printf("Digite o %iº valor: ", i + 1);
    scanf("%i", &arrayOriginal[i]);

    if (arrayOriginal[i] >= 0) {
      arrayTratado[j] = arrayOriginal[i];
      j++;
    }
  }

  printf("Valores positivos no vetor:\n");
  for (int i = 0; i < j; i++) {
    printf("%iº Valor -> %i\n", i + 1, arrayTratado[i]);
  }
}