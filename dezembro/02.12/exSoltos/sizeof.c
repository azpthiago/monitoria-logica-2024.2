#include <stdio.h>

int main() {
  int numeros[] = {64, 34, 25, 12, 22, 11, 90, 4, 34, 25, 12, 22, 11, 90};

  // A função sizeof retornara o tamanho de um array em bytes, ou seja,
  // o array acima possui 14 valores e ele retornara 14.
  int tamanho = sizeof(numeros) / sizeof(numeros[0]);

  // Nesse caso ele retorna 14 mas para utilização em funções de leituras
  // ou ordenação de arrays, utilize o `tamanho - 1`
  printf("Tamanho do array -> %d", tamanho);

  return 0;
}