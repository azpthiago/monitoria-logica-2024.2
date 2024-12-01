#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

void exibirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d, ", vetor[i]);
  }
  printf("\n");
}

int main() {
  int quantidade = 0;

  printf("Digite a quantidade de valores a serem digitados: ");
  scanf("%i", &quantidade);

  int arrayOriginal[quantidade];

  for (int i = 0; i < quantidade; i++) {
    printf("Digite o %d número: ", i + 1);
    scanf("%i", &arrayOriginal[i]);
  }

  printf("Vetor original -> ");
  exibirVetor(arrayOriginal, quantidade);

  bubbleSort(arrayOriginal, quantidade);

  printf("Vetor Ordenado -> ");
  exibirVetor(arrayOriginal, quantidade);

  return 0;
}