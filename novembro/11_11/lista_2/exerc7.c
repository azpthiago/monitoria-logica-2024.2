#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Problema: Uma empresa vai conceder um aumento percentual de sal�rio aos
  // seus funcion�rios dependendo de quanto cada pessoa ganha, conforme tabela
  // ao lado. Fazer um programa para ler o sal�rio de uma pessoa, da� mostrar
  // qual o novo sal�rio desta pessoa depois do aumento, quanto foi o aumento e
  // qual foi a porcentagem de aumento.
  // At� R$ 1000 -> Aumento de 20%
  // Acima de R$ 1000 e at� R$ 3000 -> Aumento de 15%
  // Acima de R$ 3000 e at� R$ 8000 -> Aumento de 10%
  // Acima de R$ 8000 -> Aumento de 5%

  double salarioAtual, salarioReajustado, aumento;
  double percentualAumento;

  printf("+ Digite o seu sal�rio atual: ");
  scanf("%lf", &salarioAtual);

  if (salarioAtual <= 1000) {
    percentualAumento = 0.20;
  } else if (salarioAtual <= 3000) {
    percentualAumento = 0.15;
  } else if (salarioAtual <= 8000) {
    percentualAumento = 0.10;
  } else {
    percentualAumento = 0.05;
  }

  aumento = salarioAtual * percentualAumento;
  salarioReajustado = salarioAtual + aumento;

  printf("-> O seu sal�rio reajustado � de R$%.2lf\n", salarioReajustado);
  printf("-> O aumento foi de R$%.2lf\n", aumento);
  printf("-> A porcentagem de aumento foi de %.0lf%%\n",
         percentualAumento * 100);

  return 0;
}
