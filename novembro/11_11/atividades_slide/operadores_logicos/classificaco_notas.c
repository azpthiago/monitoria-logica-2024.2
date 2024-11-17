#include <stdio.h>

int main() {
  double nota;

  printf("+ Digite a sua nota: ");
  scanf("%lf", &nota);

  if (nota > 0 && nota < 5) {
    printf("Nota: D");
  } else if (nota >= 5 && nota < 7) {
    printf("Nota: C");
  } else if (nota >= 7 && nota < 9) {
    printf("Nota: B");
  } else if (nota >= 9 && nota <= 10) {
    printf("Nota: A");
  }

  return 0;
}