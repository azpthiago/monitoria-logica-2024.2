#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Um algoritmo que recebe uma temperatura e classifica como Frio,
  // Agradável ou Quente com base em intervalos definidos.

  double temperatura;
  printf("+ Digite a temperatura: ");
  scanf("%lf", &temperatura);

  if (temperatura > 0 && temperatura <= 15) {
    printf("Clima: Frio");
  }

  if (temperatura > 15 && temperatura <= 25) {
    printf("Clima: Agradável");
  }

  if (temperatura > 25) {
    printf("Clima: Quente");
  }

  return 0;
}
