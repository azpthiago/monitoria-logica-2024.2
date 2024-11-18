#include <stdio.h>

int main() {
  int vetor[5] = {0};
  int maior = 0, menor = 0;
  for (int i = 0; i < 5; i++) {
    printf("Digite o %i valor: ", i + 1);
    scanf("%i", &vetor[i]);

    if (i == 0) {
      maior = menor = vetor[i];
    } else {
      if (vetor[i] < menor) {
        menor = vetor[i];
      }
      if (vetor[i] > maior) {
        maior = vetor[i];
      }
    }
  }

  printf("Maior Valor: %i\nMenor Valor: %i", maior, menor);
}