#include <stdio.h>

// Nesse caso a função bubbleSort não é modificada
// Pois enviamos somente a linha da matriz e não ela inteira
void bubbleSort(int vetor[], int coluna) {
  for (int i = 0; i < coluna - 1; i++) {
    for (int j = 0; j < coluna - i - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        int temp = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

void exibirMatriz(int matriz[][3], int linhas, int colunas) {
  for (int i = 0; i < linhas; i++) {
    // Diz em qual linha esta na iteração da matriz
    printf("\nLinha %d\n", i + 1);
    for (int j = 0; j < colunas; j++)
      // Itera por cada valor da coluna
      printf("%d, ", matriz[i][j]);
  }
  printf("\n");
}

int main() {
  int arrayOriginal[3][3] = {{6, 7, 3}, {7, 4, 9}, {11, 2, 25}};
  int linhas = 3, colunas = 3;

  printf("Matriz Original:");
  exibirMatriz(arrayOriginal, linhas, colunas);

  // Fazemos um for para enviar linha por linha para a função
  // do bubbleSort, assim ordenando cada uma por vez.
  for (int i = 0; i < linhas; i++) {
    bubbleSort(arrayOriginal[i], colunas);
  }

  // Printamos a matriz utilizando a função criada.
  printf("Matriz Ordenada: ");
  exibirMatriz(arrayOriginal, linhas, colunas);

  return 0;
}
