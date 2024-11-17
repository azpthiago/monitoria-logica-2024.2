#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  // Problema: Fazer um programa para ler os três coeficientes de uma equação do
  // segundo grau. Usando a fórmula de Baskara, calcular e mostrar os valores
  // das raízes x1 e x2 da equação com quatro casas decimais.

  double a, b, c;
  double delta, x1, x2;

  printf("Digite os coeficientes a da equação: ");
  scanf("%lf", &a);
  printf("Digite os coeficientes b da equação: ");
  scanf("%lf", &b);
  printf("Digite os coeficientes c da equação: ");
  scanf("%lf", &c);

  delta = b * b - 4 * a * c;

  if (delta < 0) {
    printf("A equação não possui raízes reais.\n");
  } else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("As raízes da equação são:\n");
    printf("x1 = %.4lf\n", x1);
    printf("x2 = %.4lf\n", x2);
  }

  return 0;
}
