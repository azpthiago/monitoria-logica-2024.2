#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Receba três valores e verifique se eles podem formar um
  // triângulo. Caso possam, determine o tipo de triângulo (equilátero,
  // isósceles ou escaleno).

  int primeiroValor, segundoValor, terceiroValor;

  printf("+ Digite o primeiro valor: ");
  scanf("%i", &primeiroValor);

  printf("+ Digite o segundo valor: ");
  scanf("%i", &segundoValor);

  printf("+ Digite o terceiro valor: ");
  scanf("%i", &terceiroValor);

  if (primeiroValor == segundoValor && segundoValor == terceiroValor) {
    printf("-> Tipo do triángulo: Equilátero");
  } else if (primeiroValor == segundoValor || primeiroValor == terceiroValor ||
             segundoValor == terceiroValor) {
    printf("-> Tipo do triángulo: Ísoceles");
  } else {
    printf("-> Tipo do triángulo: Escaleno");
  }

  return 0;
}
