#include <stdio.h>

int main() {
  int idade = 0, acumulador = 0, totalIdade = 0;
  double mediaIdades;

  while (idade >= 0) {
    printf("+ Digite uma idade: ");
    scanf("%i", &idade);

    if (acumulador == 0 && idade < 0) {
      printf("-> Impossível calcular");
      return 0;
    }

    if (idade > 0) {
      acumulador++;
      totalIdade += idade;
    }
  }

  mediaIdades = totalIdade / acumulador;

  printf("-> A média de idades é de %.2lf anos", mediaIdades);

  return 0;
}