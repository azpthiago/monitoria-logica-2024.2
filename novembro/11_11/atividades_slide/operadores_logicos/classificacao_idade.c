#include <stdio.h>

int main() {
  int idade;

  printf("+ Digite a sua idade: ");
  scanf("%i", &idade);

  if (idade > 0 && idade <= 12) {
    printf("-> Fixa et�ria: Crian�a");
  } else if (idade > 12 && idade <= 17) {
    printf("-> Fixa et�ria: Adolescente");
  } else if (idade > 17 && idade <= 64) {
    printf("-> Fixa et�ria: Adulto");
  } else {
    printf("-> Fixa et�ria: Idoso");
  }

  return 0;
}