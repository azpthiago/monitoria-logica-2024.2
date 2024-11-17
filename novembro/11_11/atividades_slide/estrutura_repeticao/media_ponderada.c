#include <stdio.h>

int main() {
  int N = 0;
  double nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

  printf("Digite a quantidade de testes a serem inseridos: ");
  scanf("%i", &N);

  for (int i = 0; i < N; i++) {
    printf("+ Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("+ Digite a segunda nota: ");
    scanf("%lf", &nota2);
    printf("+ Digite a terceira nota: ");
    scanf("%lf", &nota3);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
    printf("-> Media: %.1lf\n", media);
  }

  return 0;
}