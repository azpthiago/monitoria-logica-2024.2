#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Dado o peso e altura de uma pessoa, calcule seu IMC e classifique
  // de acordo com a tabela abaixo. Menor que 18.5 -> Abaixo do peso 18.5 - 24.9
  // -> Peso normal 25.0 - 29.9 -> Acima do peso 30.0 - 34.9 -> Obesidade Classe
  // 1 35.0 - 39.9 -> Obesidade Classe 2 Maior ou igual a 40 -> Obesidade Classe
  // 3

  double peso, altura, imc;

  printf("+ Calculadora de IMC + \n");
  printf("+ Digite o seu peso (em kg): ");
  scanf("%lf", &peso);
  printf("+ Digite a sua altura (em metros): ");
  scanf("%lf", &altura);

  imc = peso / (altura * altura);
  printf("-> Seu IMC é: %.2lf\n", imc);

  if (imc < 18.5) {
    printf("Classificação: Abaixo do peso\n");
  } else if (imc >= 18.5 && imc <= 24.9) {
    printf("Classificação: Peso normal\n");
  } else if (imc >= 25.0 && imc <= 29.9) {
    printf("Classificação: Acima do peso\n");
  } else if (imc >= 30.0 && imc <= 34.9) {
    printf("Classificação: Obesidade Classe 1\n");
  } else if (imc >= 35.0 && imc <= 39.9) {
    printf("Classificação: Obesidade Classe 2\n");
  } else {
    printf("Classificação: Obesidade Classe 3\n");
  }

  return 0;
}
