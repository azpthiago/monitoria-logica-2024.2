#include <locale.h>
#include <math.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  // Problema: Fazer um programa para ler os tr�s coeficientes de uma equa��o do
  // segundo grau. Usando a f�rmula de Baskara, calcular e mostrar os valores
  // das ra�zes x1 e x2 da equa��o com quatro casas decimais.

  double a, b, c;
  double delta, x1, x2;

  printf("Digite os coeficientes a da equa��o: ");
  scanf("%lf", &a);
  printf("Digite os coeficientes b da equa��o: ");
  scanf("%lf", &b);
  printf("Digite os coeficientes c da equa��o: ");
  scanf("%lf", &c);

  delta = b * b - 4 * a * c;

  if (delta < 0) {
    printf("A equa��o n�o possui ra�zes reais.\n");
  } else {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    printf("As ra�zes da equa��o s�o:\n");
    printf("x1 = %.4lf\n", x1);
    printf("x2 = %.4lf\n", x2);
  }

  return 0;
}
