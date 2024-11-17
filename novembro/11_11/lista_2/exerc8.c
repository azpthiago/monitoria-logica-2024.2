#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Fazer um programa para ler dois n�meros inteiros, e dizer se um
  // n�mero � m�ltiplo do outro. Os n�meros podem serdigitados em qualquer
  // ordem.

  int primeiroNumero, segundoNumero;

  printf("+ Digite o primeiro n�mero: ");
  scanf("%i", &primeiroNumero);

  printf("+ Digite o segundo n�mero: ");
  scanf("%i", &segundoNumero);

  if (primeiroNumero % segundoNumero == 0 ||
      segundoNumero % primeiroNumero == 0) {
    printf("Os n�mero %i e %i s�o m�ltiplos", primeiroNumero, segundoNumero);
  } else {
    printf("-> O n�meros n�o s�o m�ltiplos");
  }
  return 0;
}
