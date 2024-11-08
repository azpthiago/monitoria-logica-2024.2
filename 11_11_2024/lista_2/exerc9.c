#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Receba tr�s valores e verifique se eles podem formar um
  // tri�ngulo. Caso possam, determine o tipo de tri�ngulo (equil�tero,
  // is�sceles ou escaleno).

  int primeiroValor, segundoValor, terceiroValor;

  printf("+ Digite o primeiro valor: ");
  scanf("%i", &primeiroValor);

  printf("+ Digite o segundo valor: ");
  scanf("%i", &segundoValor);

  printf("+ Digite o terceiro valor: ");
  scanf("%i", &terceiroValor);

  if (primeiroValor == segundoValor && segundoValor == terceiroValor) {
    printf("-> Tipo do tri�ngulo: Equil�tero");
  } else if (primeiroValor == segundoValor || primeiroValor == terceiroValor ||
             segundoValor == terceiroValor) {
    printf("-> Tipo do tri�ngulo: �soceles");
  } else {
    printf("-> Tipo do tri�ngulo: Escaleno");
  }

  return 0;
}
