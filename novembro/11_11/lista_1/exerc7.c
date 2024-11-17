#include <locale.h>
#include <stdio.h>
int main() {
  setlocale(LC_ALL, "Portuguese");

  // Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular
  // e escrever o valor correspondente em graus Celsius.

  float celcius, fahrenheit;

  printf("+ Digite a temperatura em Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celcius = 5.0 / 9 * (fahrenheit - 32);

  printf("-> Tempratura em Celcius: %.1f", celcius);

  return 0;
}