#include <stdio.h>
// Neste caso apenas mudaremos os tipos de dados nas funções
// De maneira similar a ao array de caracteres.
void bubbleSort(float vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        float temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

// Lembre de mudar aqui também
void exibirVetor(float vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    // Lembre-se de atualizar a string de controle
    printf("%.2f, ", vetor[i]);
  }
  printf("\n");
}

int main() {
  float arrayOriginal[10] = {5.4, 3.2, 7.8, 1.0, 9.3, 6.6, 4.4, 8.8, 2.2, 0.0};
  int tamanho = sizeof(arrayOriginal) / sizeof(arrayOriginal[0]);

  printf("Vetor original -> ");
  exibirVetor(arrayOriginal, tamanho);

  bubbleSort(arrayOriginal, tamanho);

  printf("Vetor Ordenado -> ");
  exibirVetor(arrayOriginal, tamanho);

  return 0;
}