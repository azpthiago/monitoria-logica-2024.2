#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Fazer um programa para ler dois números inteiros, e dizer se um
  // número é múltiplo do outro. Os números podem serdigitados em qualquer
  // ordem.

  int primeiroNumero, segundoNumero;

  printf("+ Digite o primeiro número: ");
  scanf("%i", &primeiroNumero);

  printf("+ Digite o segundo número: ");
  scanf("%i", &segundoNumero);

  if (primeiroNumero % segundoNumero == 0 ||
      segundoNumero % primeiroNumero == 0) {
    printf("Os número %i e %i são múltiplos", primeiroNumero, segundoNumero);
  } else {
    printf("-> O números não são múltiplos");
  }
  return 0;
}
