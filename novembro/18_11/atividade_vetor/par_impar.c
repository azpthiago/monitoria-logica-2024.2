#include <stdio.h>

int main() {
  int vetor[4] = {0};
  int par = 0, impar = 0;
  for (int i = 0; i < 4; i++) {
    printf("Digite o %i valor: ", i + 1);
    scanf("%i", &vetor[i]);

    if (vetor[i] % 2 == 0) {
      par++;
    } else {
      impar++;
    }
  }
  printf("Números pares: %i\nNúmeros Impares: %i", par, impar);
}