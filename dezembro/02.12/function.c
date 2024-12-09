#include <stdio.h>
float mediaFinal(float nota1, float nota2) {
  float temporario = (nota1 + nota2) / 2;
  return temporario;
}

int main() {
  float media = mediaFinal(10, 9);

  printf("%.2f", media);

  return 0;
}