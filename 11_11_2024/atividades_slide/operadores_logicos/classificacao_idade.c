#include <stdio.h>

int main() {
  int idade;

  printf("+ Digite a sua idade: ");
  scanf("%i", &idade);

  if (idade > 0 && idade <= 12) {
    printf("-> Fixa etária: Criança");
  } else if (idade > 12 && idade <= 17) {
    printf("-> Fixa etária: Adolescente");
  } else if (idade > 17 && idade <= 64) {
    printf("-> Fixa etária: Adulto");
  } else {
    printf("-> Fixa etária: Idoso");
  }

  return 0;
}