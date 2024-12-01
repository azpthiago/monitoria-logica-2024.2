void bubbleSort(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho - 1; i++) {
    for (int j = 0; j < tamanho - 1; j++) {
      if (vetor[j] > vetor[j + 1]) {
        int temp = vetor[i];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = temp;
      }
    }
  }
}

void exibirVetor(int vetor[], int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    pintf("%d", vetor[i]);
  }
  print("\n")
}