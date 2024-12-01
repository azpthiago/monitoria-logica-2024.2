#include <stdio.h>
// Para ordenar um array de caracteres � preciso mudar os tipos de dados
// presentes na fun��o de bubbleSort e na fun��o de exibi��o do vetor.
void bubbleSort(char vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        char temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

// Lembre-se de mudar na declara��o das duas fun��es;
void exibirVetor(char vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%c, ", vetor[i]);
    // Atente-se a mudan�a da string de controle na hora de exibir o valor
  }
  printf("\n");
}

int main() {
  // Declara o array de caracteres;
  char arrayOriginal[5] = {'d', 'c', 't', 's', 'u'};
  int tamanho = sizeof(arrayOriginal) / sizeof(arrayOriginal[0]);

  printf("Vetor original -> ");
  exibirVetor(arrayOriginal, tamanho);

  bubbleSort(arrayOriginal, tamanho);

  printf("Vetor Ordenado -> ");
  exibirVetor(arrayOriginal, tamanho);

  return 0;
}