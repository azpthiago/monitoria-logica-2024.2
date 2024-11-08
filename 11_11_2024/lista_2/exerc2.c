#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  // Problema: Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos custa R$ 2.00. Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, daí mostrar o valor a ser pago.

  int minutosConsumidos;
  double valorFinalPlano = 50.00;

  printf("+ Digite o quantidade de minutos consumidos: ");
  scanf("%i", &minutosConsumidos);

  if (minutosConsumidos > 100) {
    valorFinalPlano += (minutosConsumidos - 100) * 2.00;
  }
  printf("-> O valor a ser pago é de R$%.2lf", valorFinalPlano);

  return 0;
}
