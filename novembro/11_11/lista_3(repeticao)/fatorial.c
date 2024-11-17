#include <stdio.h>

int main() {
  // Problema: Fazer um programa para ler um número natural N (valor máximo:
  // 15), e depois calcular e mostrar o fatorial de N.

  int valor;
  long long int fatorial =
      1;  // Tipo long long int para suportar números grandes

  printf("+ Digite o número inteiro: ");
  scanf("%d", &valor);

  if (valor > 15 || valor < 0) {
    printf("-> Valor inválido");
    printf("-> Valores aceitos entre 0 e 15");
  } else {
    // Loop para calcular o fatorial
    for (int i = 1; i <= valor; i++) {
      fatorial *= i;  // Multiplicação acumulada para calcular o fatorial
    }

    printf("-> O valor fatorial de %d é %lld\n", valor,
           fatorial);  // %lld para long long int
  }

  return 0;
}
